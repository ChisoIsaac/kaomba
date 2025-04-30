#include <iostream>
#include "square.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace shapes;

int main() {
  while (true) {
    cout << "1. calculate area of square\n";
    cout << "2. calculate area of triangle\n";
    cout << "3. calculate area of circle\n";
    cout << "4. quit\n";

    int choice;
    cin >> choice;

    if (choice == 4) {
        break;
    }
    switch (choice) {
        case 1: {
            Square;
            float side;
            cout << "enter the side for the square ";
            cin >> side;
            square.setSide(side);
            cout << "Area for the square " << Area::calculateArea(square) << endl;
            break;
        }
       case 2: {
        Triangle;
        float base, height;
        cout << "enter the base for the triangle ";
        cin >> base;
        cout << "enter the height for the triangle ";
        cin >> height;
        triangle.setBase(base);
        triangle.setHeight(heiht);
        cout << "Area for the triangle " Area::calculateArea(triangle) << endl;
        break;
       }
       case 3: {
        Circle;
        float radius;
        cout << "enter the radius of the circle ";
        cin >> radius;
        circle.setRadius(radius);
        cout << "Area of the circle " Area::calculateArea(circle) << endl;
        break;
    }
    default:
    cout << "invalid choice. please try agin\n";
    }

  }
  return 0;
}

