#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14

class Shape
{
protected:
    string color;

public:
    Shape(string color)
    {
        this->color = color;
    }
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
    virtual void display() = 0;
};

class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double length, double width, string color) : Shape(color)
    {
        this->length = length;
        this->width = width;
    }
    double calculateArea()
    {
        return length * width;
    }
    double calculatePerimeter()
    {
        return (length + width) * 2;
    }

    void display()
    {
        cout << "Rectangle: \n";
        cout << "Color: " << color << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double radius, string color) : Shape(color)
    {
        this->radius = radius;
    }
    double calculateArea()
    {
        return radius * radius * PI;
    }

    double calculatePerimeter()
    {
        return 2 * radius * PI;
    }

     void display()
    {
        cout << "Circle: \n";
        cout << "Color: " << color << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main()
{
    Shape *s1 = new Rectangle(20, 10, "red");
    s1->display();

    Shape *s2 = new Circle(10, "blue");
    s2->display();

    delete s1;
    delete s2;
    Shape s[4];

}