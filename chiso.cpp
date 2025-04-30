#include <iostream>
using namespace std;
#define PI 3.14159
#define findSquare(x) (x * x)
int main (){
    double radius = 5.0;
    double area = PI * findSquare(radius);
    cout << "area of circle: " << area;
    return 0;
}