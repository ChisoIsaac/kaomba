#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include <cmath>

float Area::calculateArea(const shapes::Square& square) {
    float side = square.getSideLength();
    return side * side;
}
float Area::calculateArea(const shapes:Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}
float Area::calculateArea(const shapes::circle& circle) {
    return PI * circle.getRadius() * circle.getRadius();
}
