#include <iostream>
using namespace std;
# define MAX_VALUE 10
int main (){
    cout << "Max value: " << MAX_VALUE << endl;
    #undef MAX_VALUE
    #define MAX_VALUE 20
    cout << "Max value: " << MAX_VALUE;
    return 0;
}