#include <iostream>
using namespace std;
int main() {
    int firstValue;
    int secondValue;
    int * pPointer = nullptr;
    pPointer = &firstValue;
    *pPointer = 13;
    pPointer = &secondValue;
    *pPointer = 45;
    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';
    return 0;
}