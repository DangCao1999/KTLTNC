#include <iostream>
#include <list>
#include <string.h>
#include <algorithm>
#include <fstream>
#include "student.cpp"

using namespace std;

class ListStudent
{

    list<Student> studentList;

public:
    void addStudent(Student studentNew)
    {
        studentList.push_back(studentNew);
    }

    bool modifyStudent(Student studentModify)
    {
        list<Student>::iterator it;

        for (it = this->studentList.begin(); it != this->studentList.end(); ++it)
        {
            if (!it->id.compare(studentModify.id))
            {
                it->name = studentModify.name;
                it->score = studentModify.score;
                return true;
            }
        }
        return false;
    }

    bool deleteStudent(string id)
    {
        list<Student>::iterator it;

        for (it = this->studentList.begin(); it != this->studentList.end(); ++it)
        {
            if (!it->id.compare(id))
            {
                this->studentList.erase(it);
                return true;
            }
        }
        return false;
    }

    void saveStudent()
    {
        ofstream outs;
        outs.open("student.db", ios::out | ios::binary);
        list<Student>::iterator it;
        for (it = this->studentList.begin(); it != this->studentList.end(); ++it)
        {
            Student s = *it;
            outs.write(s.id.c_str(), s.id.length());
            outs.write(s.name.c_str(), s.name.length());
            outs.write((char *)&s.score, sizeof(s.score));
        }
        outs.close();
    }

    void loadStudent()
    {
        ifstream ins("employee.bin", ios::in | ios::binary);
        if (!ins)
        {
            cout << "Cannot open file!" << endl;
        }
        Student student;

        ins.read((char *)&student, sizeof(student));

        while (!ins.eof())
        {
            this->studentList.push_back(student);
            ins.read((char *)&student, sizeof(student));
        }

        ins.close();
    }

    list<Student> getStudents()
    {
        return this->studentList;
    }

    list<Student> getStudentsById(string idGet)
    {
        list<Student>::iterator it;
        list<Student> listStudentWithId;
        for (it = this->studentList.begin(); it != this->studentList.end(); ++it)
        {
            if (!it->id.compare(idGet))
            {
                listStudentWithId.push_back(Student(it->id, it->name, it->score));
            }
        }
        return listStudentWithId;
    }

    list<Student> getStudentsByName(string nameGet)
    {
        list<Student>::iterator it;
        list<Student> listStudentWithId;
        for (it = this->studentList.begin(); it != this->studentList.end(); ++it)
        {
            if (!it->name.compare(nameGet))
            {
                listStudentWithId.push_back(Student(it->id, it->name, it->score));
            }
        }
        return listStudentWithId;
    }

    list<Student> getStudentsByScore(double scoreGet)
    {
        list<Student>::iterator it;
        list<Student> listStudentWithId;
        for (it = this->studentList.begin(); it != this->studentList.end(); ++it)
        {
            if (it->score == scoreGet)
            {
                listStudentWithId.push_back(Student(it->id, it->name, it->score));
            }
        }
        return listStudentWithId;
    }

    void sortStudentsById(bool isAscending)
    {
        if (isAscending)
        {
            this->studentList.sort([](Student front, Student back)
                                   { return front.id > back.id; });
        }
        else
        {
            this->studentList.sort([](Student front, Student back)
                                   { return front.id < back.id; });
        }
    }

    void sortStudentsByName(bool isAscending)
    {
        if (isAscending)
        {
            this->studentList.sort([](Student front, Student back)
                                   { return front.name > back.name; });
        }
        else
        {
            this->studentList.sort([](Student front, Student back)
                                   { return front.name < back.name; });
        }
    }

    void sortStudentsByScore(bool isAscending)
    {
        if (isAscending)
        {
            this->studentList.sort([](Student front, Student back)
                                   { return front.score > back.score; });
        }
        else
        {
            this->studentList.sort([](Student front, Student back)
                                   { return front.score < back.score; });
        }
    }
};