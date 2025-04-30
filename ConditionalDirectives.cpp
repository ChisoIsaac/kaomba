#include <iostream>
using namespace std;
#define PI 3.14159
int main()
{
    #if defined(PI)
    cout << "PI is defined" << endl;
    #elif defined(SQUARE)
    cout << "PI is not defined" << endl;
    #else
    #error "Neither PI nor SQUARE is defined"
    #endif
    return 0
}