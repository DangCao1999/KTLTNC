/*

function Sovle(a,b)

    if a = 0 and b = 0 then
        display "The equation has too many solution"
    else 
        if  a = 0 and b != 0 then
            display "The equatoin has no solution"
        else
            x = -a/b
            display "The equation has one solution", x
        end if
    end if

end function
*/
#include <iostream>
using namespace std;

void Sovle(float a, float b)
{
    if (a == 0 && b == 0)
    {
        cout << "The equation has too many solution"  << endl;
    }
    else if (a == 0 && b != 0)
    {
        cout << "The equatoin has no solution" << endl;
    }
    else
    {
        float x = -a/b;
        cout << "The equation has one solution " << x << endl; 
    }
}

int main()
{
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    Sovle(a,b);
    system("pause");
    return 0;
}
