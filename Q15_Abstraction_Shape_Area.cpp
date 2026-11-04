// Q15: Demonstrate abstraction using an abstract Shape class.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function.
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        const double PI = 3.141592653589793;
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    double radius, length, width;

    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Enter rectangle length and width: ";
    cin >> length >> width;

    Circle circle(radius);
    Rectangle rectangle(length, width);

    cout << "Area of circle: " << circle.area() << '\n';
    cout << "Area of rectangle: " << rectangle.area() << '\n';

    return 0;
}
