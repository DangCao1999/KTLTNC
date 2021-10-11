#include <iostream>

using namespace std;

class Rectangle{
    double length, width;
public:
    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }
    double calculateArea(){
        return length*width;
    }
    double calculatePerimeter(){
        return (length+width)*2;
    }
};

int main(){
    Rectangle r(20,10);
    cout << "Area: " << r.calculateArea() << endl;
    cout << "Perimeter: " << r.calculatePerimeter() << endl;

    Rectangle *rpt;
    rpt = new Rectangle(100,200);
    cout << "Area pointer: " << rpt->calculateArea() << endl;
    cout << "Perimeter: " << rpt->calculatePerimeter() << endl;
    system("pause");
    return 0;
}