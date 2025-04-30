#include <iostream>
using namespace std;
#define DEBUG 
#define PI 3.14
int main ()
{
    #ifdef DEBUG 
    cout << " Debug mode ON" << endl;
    #else
    cout << "DEbug mode OFF" << endl;
    #endif
    #ifndef PI 
    cout << "PI is not defined" << endl;
    #else
    cout << "PI is defined" << endl;
    #endif
    return 0;
}