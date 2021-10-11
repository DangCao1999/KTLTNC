#include <iostream>
using namespace std;

#define PI 3.14

class Circle{
    double radius;
public:
    Circle(double radius){
        this->radius = radius;
    }
    double calculateArea(){
        return this->radius * this->radius * PI;
    }

    double calculatePerimeter(){
        return 2 * this->radius * PI;
    }
};

int main(){
    Circle c(15.0);
    cout << "Area: " << c.calculateArea() << endl;
    cout << "Perimeter: " << c.calculatePerimeter() << endl;

    system("pause");
    return 0;
}