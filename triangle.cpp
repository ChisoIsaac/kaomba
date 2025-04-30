#include "triangle.h"
namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}
    Triangle::Triangle(float base, float height) : base(b), heigth(h) {}
    Triangle::~Triangle() {}

    flaot Triangle::getBase() const {
        return base;
    }
    float Triangle::getBase() const {
        return height;
    }
    
    void Triangle::setBase(float base) {
        base = b;
    }
    void Triangle::setHeight(float height) {
        height = h;
    }
}