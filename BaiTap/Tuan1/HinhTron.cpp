#include <iostream>
#include <conio.h>
using namespace std;
class HinhTron
{
private:
    static constexpr float pi = 3.14;
    float banKinh;
    float dienTich;
    float chuVi;

public:
    void nhapBanKinh()
    {
        cout << "Nhap ban kinh: ";
        cin >> this->banKinh;
    }

    void tinhChuVi()
    {
        this->chuVi = 2 * this->banKinh * this->pi;
    }

    void tinhDienTich()
    {
        this->dienTich = this->banKinh * this->banKinh * this->pi;
    }

    void xuatChuViVaDienTich()
    {
        cout << "Chu vi: " << this->chuVi << endl;
        cout << "Dien tich: " << this->dienTich << endl;
    }
};

int main()
{
    cout << "Chuong trinh tinh chu vi dien tich hinh tron\n";
    cout << "--------------------------------------------\n";
    HinhTron hinhTron;
    hinhTron.nhapBanKinh();
    hinhTron.tinhChuVi();
    hinhTron.tinhDienTich();
    hinhTron.xuatChuViVaDienTich();

    getch();
    return 0;
}