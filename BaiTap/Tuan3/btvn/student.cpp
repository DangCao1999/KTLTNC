#include <iostream>
using namespace std;

class Student
{
public:
    string id;
    string name;
    double score;
    Student()
    {
        this->id = "";
        this->name = "";
        this->score = 0;
    }

    Student(string id, string name, double score)
    {
        this->id = id;
        this->name = name;
        this->score = score;
    }

    void output()
    {
        cout << this->id << "\t" << this->name << "\t" << this->score << endl;
    }
};