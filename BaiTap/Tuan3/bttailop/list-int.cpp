#include <iostream>
#include <list>
#include <iterator>
using namespace std;
  
//function for printing the elements in a list
void showlistincrease(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}
void showlistdescrease(list <int> g)
{
    list <int> :: iterator it;
    for(it = --g.end(); it != g.begin(); --it)
        cout << ' ' << *it;
    cout << '\n';
}
int main()
{
  
    list <int> gqlist1;
  
  
    for (int i = 5; i <= 100; i=i+5)
    {
        gqlist1.push_back(i);
       
    }
    
    showlistincrease(gqlist1);
    
    showlistdescrease(gqlist1);

    return 0;
  
}