#include <iostream>
using namespace std;

class Length
{
    double length;

public:
    Length()
    {
        length = 0;
    }

    Length(double length)
    {
        this->length = length;
    }

    void display(){
        cout << "Length: " << length << endl;
    }

    //Operator overloading
    double operator +(Length l){
        return this->length + l.length;
    }

    double operator -(Length l){
        return this->length - l.length;
    }
};

int main(){
    Length l1(20), l2(30), l3;
    l3 = l1 + l2;
    l3.display();

    l3 = l1 - l2;
    l3.display();

    system("pause");
    return 0;
}