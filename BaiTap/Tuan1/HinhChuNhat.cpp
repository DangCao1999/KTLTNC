#include <iostream>

using namespace std;
class HinhChuNhat
{
private:
    float chieuDai;
    float chieuRong;
    float dienTich;
    float chuVi;

public:
    void nhapCanhHCN()
    {
        cout << "Nhap chieu dai: ";
        cin >> this->chieuDai;
        cout << "Nhap chieu rong: ";
        cin >> this->chieuRong;
    }

    void tinhChuVi()
    {
        this->chuVi = (this->chieuDai + this->chieuRong) * 2;
    }

    void tinhDienTich()
    {
        this->dienTich = this->chieuDai * this->chieuRong;
    }

    void xuatChuViVaDienTich()
    {
        cout << "Chu vi: " << this->chuVi << endl;
        cout << "Dien tich: " << this->dienTich << endl;
    }
};

int main()
{
    cout << "Chuong trinh tinh chu vi dien tich hinh chu nhat\n";
    cout << "--------------------------------------------\n";
    HinhChuNhat hinhChuNhat;
    hinhChuNhat.nhapCanhHCN();
    hinhChuNhat.tinhChuVi();
    hinhChuNhat.tinhDienTich();
    hinhChuNhat.xuatChuViVaDienTich();

    system("pause");
    return 0;
}