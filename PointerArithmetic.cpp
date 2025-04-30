#include <iostream>
using namespace std;
int main() {
    int* pPointer = nullptr;
    int numbersArray[3] = {100, 200, 300};
    pPointer = numbersArray;
    cout << "Address at pPointer: " << pPointer  << endl;
    cout << "Address at numbersArray[0]: " << numbersArray << endl;
    cout << "Value at ++pPointer: " << *(++pPointer) << endl;
    pPointer = numbersArray;
    cout << "Value at pPointer++: " << (pPointer++) << endl;
    return 0;
 }