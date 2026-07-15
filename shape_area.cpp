/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Mathematical area calculation system demonstrating pure abstraction
 */

#include <iostream>
#include <iomanip>

using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }
};

int main() {
    cout << "--- Shape Area Calculation ---" << endl;

    Shape* shape1 = new Circle(7.0);
    Shape* shape2 = new Rectangle(5.0, 10.0);

    cout << "Circle Area (Radius 7.0):    " << fixed << setprecision(2) << shape1->calculateArea() << endl;
    cout << "Rectangle Area (5.0 x 10.0): " << shape2->calculateArea() << endl;

    delete shape1;
    delete shape2;

    return 0;
}