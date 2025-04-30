#include TRIANGLE_H
#define TRIANGLE_H

namespace shapes{
    class Triangle{
        private:
        float base;
        float height;
        public:
        Triangle();
        Triangle(float base, float height);
        ~Triangle();

        float getBase() const;
        float getHeight() const;

        void setBase(float base);
        void setHeight(float height);

    };
}
#endeif