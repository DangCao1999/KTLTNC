#include <iostream>

using namespace std;

class SinhVien
{
    string ten;
    string mssv;
    float diem;

public:
    void input()
    {
        cout << "mssv: ";
        cin >> this->mssv;
        cin.ignore(); //clear buffer
        cout << "ten: ";
        getline(std::cin, this->ten);
        cout << "diem: ";
        cin >> this->diem;
    }
    void output()
    {
        cout << "------- out put -------";
        cout << "mssv: " << this->mssv << endl;
        cout << "ten: " << this->ten << endl;
        cout << "diem: " << this->diem << endl;
    }
};

int main()
{
    SinhVien sinhvien;
    sinhvien.input();
    sinhvien.output();
    system("pause");
    return 0;
};