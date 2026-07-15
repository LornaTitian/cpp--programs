/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Dynamic shape drawing using Run-time Polymorphism (Function Overriding)
 */

#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Base Shape" << endl;
    }
    virtual ~Shape() {} 
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* shapePtr = nullptr;

    cout << "--- Shape Drawing (Run-Time Polymorphism) ---" << endl;

    shapePtr = new Circle();
    shapePtr->draw(); 
    delete shapePtr;

    shapePtr = new Rectangle();
    shapePtr->draw(); 
    delete shapePtr;

    shapePtr = new Triangle();
    shapePtr->draw(); 
    delete shapePtr;

    return 0;
}