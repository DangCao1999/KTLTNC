
#include <iostream>
using namespace std;
class Employee
{

public:
    string id;
    string name;
    int salary;
    Employee()
    {
        this->id = "";
        this->name = "";
        this->salary = 0;
    }
    Employee(string id, string name, int salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void input()
    {
        cout << "Enter id: ";
        getline(std::cin, this->id);
        cout << "Enter name: ";
        getline(std::cin, this->name);
        cout << "Enter salary: ";
        cin >> this->salary;
    }

    void output()
    {
        cout << this->id << "\t" << this->name << "\t" << this->salary << endl;
    }

    // bool operator < (Employee e)
    // {
    //     return this->salary < e.salary;
    // }
};


