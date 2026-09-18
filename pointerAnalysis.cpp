#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    if (ptr != nullptr) {
        cout << "Memory Location: " << ptr << endl;
        cout << "Value:           " << *ptr << endl;
    }
}

int main() {
    // Part 2a: Stack Allocation
    int iValue = 42;
    cout << "--- Stack Variable ---" << endl;
    analyze_pointer(&iValue);

    // Part 2b: Heap Allocation
    int *heapPtr = new int(88);
    cout << "\n--- Heap Variable ---" << endl;
    analyze_pointer(heapPtr);

    // Clean up heap allocation
    delete heapPtr;
    heapPtr = nullptr;

    return 0;
}