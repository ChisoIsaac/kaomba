#include <iostream>
#include <limits>
using namespace std;
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);
int main () {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n=== Shape Area Calculator =====\n";
        cout << "1. Calculate Area of Triangle\n";
        cout << "2. Calculate Area of Rectangle\n";
        cout << "3. Calculate Area of Square\n";
        cout << "4. Quit\n";
        cout << "enter your choice (1 - 4):";

        while (!(cin >> choice) || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "invalid input! please enter a number between 1 and 4 ";
            }
              
            switch (choice) {
            case 1: {
                double base, height;
                cout << " Eneter the base of the triangle: ";
                while (!(cin >> base) || base <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input base must be a positive number ";
                }
                cout << " Eneter the height of the triangle: ";
                while (!(cin >> height) || height <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input height must be a positive number ";
                }
                double area = calculateTriangleArea(base, height);
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << " Eneter the length of the triangle: ";
                while (!(cin >> length) || length <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input base must be a positive number ";
                }

                cout << " Eneter the width of the triangle: ";
                while (!(cin >> width) || width <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input width must be a positive number ";
                }
                double area = calculateRectangleArea(length, width);
                cout << "The area of the lectangle is: " << area << endl;
                break;
             }
             case 3: {
                double side;
                cout << " Eneter the side of the square: ";
                while (!(cin >> side) || side <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input side must be a positive number ";  
             }
             double area = calculateSquareArea(side);
             cout << " The area of the square is: " << area << endl;
             break;
            }
              case 4: {
                running = false;
                cout << "\nExiting the program. ByeBye!\n";
                break;
                  }
                }
              }
                  return 0; 
                }
                double calculateTriangleArea(double base, double height) {
                    return 0.5 * base * height;
                }
                double calculateRectangleArea(double length, double width) {
                    return length * width;
                }
                double calculateSqureArea(double side) {
                    return side * side;
                }