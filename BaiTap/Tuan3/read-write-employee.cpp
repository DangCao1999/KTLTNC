#include <list>
#include <iostream>
#include "../Tuan2/employee.cpp"
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

int main()
{
    list<Employee> employees;

    // employees.push_back(Employee("1", "A", 5000));
    // employees.push_back(Employee("6", "B", 3000));
    // employees.push_back(Employee("3", "C", 6000));
    // employees.push_back(Employee("2", "D", 1000));
    // employees.push_back(Employee("4", "E", 2000));

    //write data to file

    // ofstream outs;
    // outs.open("employee.bin", ios::out | ios::binary);
    // list<Employee>::iterator it;
    // for (it = employees.begin(); it != employees.end(); ++it)
    // {
    //     Employee e = *it;
    //     outs.write(e.id.c_str(), e.id.size());
    //     outs.write(e.name.c_str(), e.name.size());
    //     outs.write((char*)&e.salary, sizeof(e.salary));
    // }
    //outs.close();

    ifstream ins("C:\\Users\\PC\\Desktop\\KTLTNC\\employee.bin", ios::in | ios::binary);
    if (!ins)
    {
        cout << "Cannot open file!" << endl;
    }
    Employee emp;

    ins.read((char *)&emp, sizeof(emp));

    while (!ins.eof())
    {
        employees.push_back(emp);
        ins.read((char*)&emp, sizeof(emp));
    }

    ins.close();
    showlist(employees);


    system("pause");
    return 0;
}