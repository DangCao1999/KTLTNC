#include <list>
#include <iostream>
using namespace std;


void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
  std::list<int> data_list;
  data_list.push_back(400);
  data_list.push_back(100);
  data_list.push_back(500);
  data_list.push_back(200);
  
  showlist(data_list);

  data_list.sort();

  showlist(data_list);
  
  system("pause");
  return 0;
}
 