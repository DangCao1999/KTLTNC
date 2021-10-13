#include <iostream>
using namespace std;
// a + bi
// a,b là số thực
// i là số ảo: i^2 = -1

// các phép toán với số phức
// (a + ib) + (c + id) =  (a+c) + i(b+d)
// (a + ib) - (c + id) =  (a+c) - i(b+d)
class ComplexNumber
{
    double a, b;

public:
    ComplexNumber()
    {
        a = b = 0;
    }
    ComplexNumber(double a, double b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        if (b >= 0)
        {
            cout << a << " + i" << b << endl;
        }
        else
        {
            cout << a << " - i" << -b << endl;
        }
    }

};

int main()
{
    ComplexNumber c1(1, 2), c2(3, 4), c3, c4;
    c3 = c1+c2;
    c4 = c1-c2;
    c3.display();
    c4.display();
    
    return 0;
}
