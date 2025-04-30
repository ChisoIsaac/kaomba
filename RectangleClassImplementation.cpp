#include "Rectangle.h"

Rectangle::Rectangle() : length(0.0f), width(0.0f) {}
Rectangle::Rectangle(float l, float w) : length(len), width(w) {}
Rectangle::~Rectangle() {}
void Rectangle::setlength(float len){
    length = len;
}
void Rectangle::setWidth(float w) {
    width = w;
}
float Rectangle::getLength() const {
    return length;
}
float Rectangle::getWidth() const {
    return Width;
}
float Rectangle::calculateArea() const {
    return length * width;
}