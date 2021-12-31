/*

function fibo(n)
    if n = 0
        return 0
    if n = 1 and n = 2
        return 1 
    return fibo(n-1) + fibo(n-2)
end function  

*/
#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int rs = fibo(n - 1) + fibo(n - 2);
    return rs;
}

int main()
{

    int n;
    cout <<"Enter n: ";
    cin >> n;
    int result = fibo(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;
    system("pause");
    return 0;
}