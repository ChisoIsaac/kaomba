#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
        private:
        float sideLength;
        public:
        Square();
        Square(float side);
        ~Square();

        float getSideLength() const;
        void setSideLength(float side);
    };
}
#endif