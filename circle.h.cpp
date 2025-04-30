#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
        private:
        float radius;
        public:
        Circle();
        Circle(float radius);
        ~Circle();

        float getRadius() const;
        void setRadius(float radius);
    };
}
#endif