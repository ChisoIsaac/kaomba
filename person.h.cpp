#pragma once
#include <string>
using namespace std;
class Person{
    public:
    Person();
    Person(string firstname, float newWeight, int age);
    ~Person();

    float operator+(const Person& otherPerson);

    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);

    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);

    operator int();
    operator string();
    operator float();

    private:
    float mWeight;
    string mFirstname;
    int mAge;
};