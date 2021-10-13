#include <list>
#include <iostream>
#include "employee.cpp"
#include <fstream>

using namespace std;

void showlist(list<Employee> g)
{
    list<Employee>::iterator it;
    cout << "ID"
         << "\t"
         << "Name"
         << "\t"
         << "Salary" << endl;
    for (it = g.begin(); it != g.end(); ++it)
    {
        it->output();
    }
}

// bool operator < (Employee e1, Employee e2){
//     return e1.salary > e2.salary;
// }

//Lambda
//must be auto -> not bool
auto compareEI = [](Employee e1, Employee e2)
{
    return e1.salary < e2.salary;
};

auto compareESa = [](Employee e1, Employee e2)
{
    return e1.salary > e2.salary;
};

int main()
{
    list<Employee> employees;

    // employees.push_back(Employee("1", "A", 5000));
    // employees.push_back(Employee("6", "B", 3000));
    // employees.push_back(Employee("3", "C", 6000));
    // employees.push_back(Employee("2", "D", 1000));
    // employees.push_back(Employee("4", "E", 2000));
    //showlist(employees);

    // employees.sort([](Employee front, Employee back)
    //                { return front.salary < back.salary; });

    //employees.sort();

    // employees.sort(compareESa);

    // showlist(employees);

    // write data to file
    ofstream outs;
    outs.open("employee.bin");
    list<Employee>::iterator it;
    for (it = employees.begin(); it != employees.end(); ++it)
    {
        Employee e = *it;
        outs.write((char *)&e, sizeof(e));
    }

    outs.close();
    showlist(employees);
        system("pause");
    return 0;
}