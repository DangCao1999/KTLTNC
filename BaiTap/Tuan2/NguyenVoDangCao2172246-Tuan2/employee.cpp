#include <list>
#include <iostream>
using namespace std;

class Employee
{

public:
    string id;
    string name;
    int salary;
    Employee(string id, string name, int salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void input()
    {
        cout << "Nhap msnv: ";
        getline(std::cin, this->id);
        cout << "Nhap ten: ";
        getline(std::cin, this->name);
        cout << "Nhap luong: ";
        cin >> this->salary;
    }

    void output()
    {
        cout << this->id << "\t" << this->name << "\t" << this->salary << endl;
    }
};

void showlist(list<Employee> g)
{
    list<Employee>::iterator it;
    cout << "ID" << "\t" << "Name" << "\t" << "Salary" << endl;
    for (it = g.begin(); it != g.end(); ++it)
    {
        it->output();
    }
}

int main()
{
    list<Employee> employees;

    employees.push_back(Employee("1", "A", 5000));
    employees.push_back(Employee("6", "B", 3000));
    employees.push_back(Employee("3", "C", 6000));
    employees.push_back(Employee("2", "D", 1000));
    employees.push_back(Employee("4", "E", 2000));
    //showlist(employees);

    employees.sort([](Employee &front, Employee &back)
                   { return front.salary < back.salary; });

    showlist(employees);
    system("pause");
    return 0;
}