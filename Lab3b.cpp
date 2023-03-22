#include <iostream>
using namespace std;

int main() {
    int n , sum=0;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    while (n!=0) {
        sum+=n;
        cout << "\n!!Nhap vao so nguyen khac 0.";
        cout << "\nNhap 0 de thoat khoi chuong trinh.";
        cin >> n;
    }
    cout << "\nTong cac so nguyen vua nhap la: " << sum << endl;
    system("pause");
    return 0;
}