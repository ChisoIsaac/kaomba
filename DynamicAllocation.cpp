#include <iostream>
#include <string>
using namespace std;
int main() {
    int* dynamicInt = new int;
    string* dynamicString = new string;
    cout << "enter an integer value ";
    cin >> *dynamicInt;
    cin.ignore();
    cout << "enter a string value ";
    getline(cin, *dynamicString);
    cout << "\nDynamically allocated integer value " << dynamicInt << endl;
    cout << "\nDynamically allocated string value " << dynamicString << endl;
    delete dynamicInt;
    delete dynamicString;
    return 0;
}