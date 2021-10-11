#include <iostream>

using namespace std;
class NhanVien
{

    string msnv;
    string ten;
    long int luong;

public:
    void nhapTT()
    {
        cout << "Nhap msnv: ";
        getline(std::cin, this->msnv);
        cout << "Nhap ten: ";
        getline(std::cin, this->ten);
        cout << "Nhap luong: ";
        cin >> this->luong;
    }

    void xuatTT()
    {
        cout << "Msnv: " << this->msnv << endl;
        cout << "Ten: " << this->ten << endl;
        cout << "Luong: " << this->luong << endl;
    }
};

int main()
{
    cout << "Chuong trinh nhap xuat thong tin nhan vien\n";
    cout << "--------------------------------------------\n";
    NhanVien nhanVien;
    cout << "Nhap thong tin nhan vien";
    nhanVien.nhapTT();
    cout << "Xuat thong tin nhan vien";
    nhanVien.xuatTT();
    system("pause");
    return 0;
}
