#include <iostream>
#include <list>
#include <string.h>
#include "list-student.cpp"
using namespace std;

class Menu
{

    ListStudent listStudent;

public:
    Menu()
    {
    }

    void printMenu()
    {
        cout << "--------MENU--------" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Input students" << endl;
        cout << "2. Search students" << endl;
        cout << "3. Show List students" << endl;
        cout << "4. Sort students" << endl;
        cout << "5. Modify students" << endl;
        cout << "6. Delete students" << endl;
        cout << "7. Save students" << endl;
        cout << "8. Load students " << endl;
    }

    void enterSelect()
    {
        int numberSelect;
        do
        {
            printMenu();
            cout << "Your select is: ";
            cin >> numberSelect;
        } while (numberSelect < 0 || numberSelect > 9);

        processSelect(numberSelect);
    }

    void processSelect(int numberSelect)
    {
        switch (numberSelect)
        {
        case 0:
            exitProgarm();
            break;
        case 1:
            addNewStudent();
            break;
        case 2:
        {
            int select = selectTypeSearchStudent();
            searchWithType(select);

            break;
        }

        case 3:
            showListStudentCase();
            break;
        case 4:
        {
            int selectType = selectTypeSortStudent();
            bool isAscending = selectIsAscendingSortStudent();
            sortWithTypeStudent(selectType, isAscending);
            break;
        }
        case 5:
        {
            Student student = enterStudent();
            modifyStudent(student);
            break;
        }

        case 6:
        {
            deleteStudent();
            break;
        }
        case 7:
        {
            saveStudent();
            break;
        }

        case 8:
        {
            loadStudent();
            break;
        }
        }
        enterSelect();
    }

    //------------------Case funtion----------------
    void exitProgarm()
    {
        exit(0);
    }

    // make new student
    Student enterStudent()
    {
        string id, name;
        double score;
        system("cls");
        cin.ignore();
        cout << "Enter student" << endl;
        cout << "Enter id: ";
        getline(std::cin, id);
        cout << "Enter name: ";
        getline(std::cin, name);
        cout << "Enter score: ";
        cin >> score;

        Student student = Student(id, name, score);
        return student;
    }

    // add student
    void addNewStudent()
    {
        char isContinue = 'n';
        do
        {
            Student student = enterStudent();
            listStudent.addStudent(student);
            cout << "Do you want to continue? (y/N): ";
            cin >> isContinue;
        } while (isContinue == 'y' || isContinue == 'Y');
        system("cls");
    }
    // search
    int selectTypeSearchStudent()
    {
        int userSelect;
        do
        {
            cout << "------Search------" << endl;
            cout << "1. ID" << endl;
            cout << "2. Name" << endl;
            cout << "3. Score" << endl;
            cout << "You want search by: ";
            cin >> userSelect;
            cin.ignore();
        } while (userSelect < 1 || userSelect > 3);
        return userSelect;
    }

    void searchWithType(int userSelect)
    {
        switch (userSelect)
        {
        case 1:
        {
            string id;
            cout << "Search by ID : ";
            getline(std::cin, id);
            list<Student> ls;
            ls = listStudent.getStudentsById(id);
            showListStudent(ls);
            break;
        }
        case 2:
        {
            string name;
            cout << "Search by Name : ";
            getline(std::cin, name);
            list<Student> ls;
            ls = listStudent.getStudentsByName(name);
            showListStudent(ls);
            break;
        }
        case 3:
        {
            double score;
            cout << "Search by score: ";
            cin >> score;
            list<Student> ls;
            listStudent.getStudentsByScore(score);
            showListStudent(ls);
            break;
        }
        default:
        {
            cout << "Your select is not valid!" << endl;
            //searchStudent();
            break;
        }
        };
    }

    // show
    void showListStudentCase()
    {
        system("cls");
        list<Student> listStudentGet = listStudent.getStudents();
        showListStudent(listStudentGet);
    }

    // sort
    int selectTypeSortStudent()
    {
        int userSelect;
        do
        {
            cout << "------Sort------" << endl;
            cout << "1. ID" << endl;
            cout << "2. Name" << endl;
            cout << "3. Score" << endl;
            cout << "You want sort by: ";
            cin >> userSelect;
            cin.ignore();
        } while (userSelect < 1 || userSelect > 3);
        return userSelect;
    }

    bool selectIsAscendingSortStudent()
    {
        bool userSelect;
        do
        {
            cout << "------Sort------" << endl;
            cout << "1. Ascending" << endl;
            cout << "2. Descending" << endl;
            cout << "You want sort by: ";
            cin >> userSelect;
            cin.ignore();
        } while (userSelect < 1 || userSelect > 2);

        return userSelect == 1;
    }

    void sortWithTypeStudent(int userSelect, bool isAscending)
    {
        switch (userSelect)
        {
        case 1:
        {
            listStudent.sortStudentsById(isAscending);
            break;
        }

        case 2:
        {
            listStudent.sortStudentsByName(isAscending);
            break;
        }

        case 3:
        {
            listStudent.sortStudentsByScore(isAscending);
            break;
        }
        default:
            break;
        }
    }

    void modifyStudent(Student student)
    {
        bool isModify = listStudent.modifyStudent(student);
        if (!isModify)
        {
            listStudent.addStudent(student);
        }
        system("cls");
    }

    void deleteStudent()
    {
        string id;
        system("cls");
        cin.ignore();
        cout << "----------Delete student---------\n";
        cout << "Enter id: ";
        getline(std::cin, id);
        bool isDelete = listStudent.deleteStudent(id);
        if (!isDelete)
        {
            cout << "The student is not found." << endl;
        }
    }

    void saveStudent()
    {
        listStudent.saveStudent();
    }

    void loadStudent()
    {
        listStudent.loadStudent();
    }

    // -----------Help function-----------

    void showListStudent(list<Student> g)
    {
        list<Student>::iterator it;
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
};