#include <iostream>
using namespace std;
int main() {
    int* pPointer = nullptr;
    int intgerVar = 5;
    pPointer = &integerVar;
    cout << "integerVar: " << integerVar << endl;
    cout << "Addres of integerVar: " << &integerVar << endl;
    cout << "pPointer: " << pPointer << endl;
    cout << "Address of pPointer: " << &pPointer << endl;
    return 0;

}