#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    Rectangle rect 1;
    float length, width;
    cout << "enter length for lectangle 1 ";
    cin >> length;
    rect1.setLength(length)
    cout << "enter width for lectangle 1 ";
    cin >> width;
    rect1.setWidth(width)
    cout << "Area of rectangle 1 " << rect1.calculateArea() << endl;

    cout << "\nEnter length for rectangle 2 ";
    cin >> length;

    cout << "\nEnter width for rectangle 2 ";
    cin >> width;

    Rectanngle rect2(length, width);

    cout << "Area of rectangle 2 " << rect2.calculateArea() << endl;
     return 0;

}