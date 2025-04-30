#include <iostream>
using namespace std;
int main()
{
    #if defined(PI)
    cout << "PI is defined" << endl;
    #else
    #error "Neither PI nor SQUARE is defined"
    #endif
    return 0;
}