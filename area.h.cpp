#ifndef AREA_H
#define AREA_H

namespace shapes {
    class Square;
    class Triangle;
    class Circle;
}
class Area {
    public:
    static float calculateArea(const shapes::Square& square);
    static float calculateArea(const shapes::Triangle& triangle);
    static float calculateArea(const shapes::Circle& circle);
};
#endif