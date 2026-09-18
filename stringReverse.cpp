#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    int length = userInput.length();

    // Dynamically allocate memory for char array (+1 for null terminator)
    char *reversed = new char[length + 1];

    // Reverse the string elements
    for (int i = 0; i < length; i++) {
        reversed[i] = userInput[length - 1 - i];
    }
    reversed[length] = '\0'; 

    cout << "Reversed string: " << reversed << endl;

    // Free dynamic memory
    delete[] reversed;
    reversed = nullptr;

    return 0;
}