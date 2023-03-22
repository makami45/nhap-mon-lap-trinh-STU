#include <iostream>
using namespace std;

int main() {
    int n,i,sum;
    cout << "\nNhap so nguyen n:";
    cin >> n;
    if (n>0) {
    for ( i = 1; i <= n; i++)
    {
        sum+=i;
       
    }
    cout << "\nTong can tinh la: "<< sum <<endl;
    }
  else
  cout << "\nSo vua nhap la khong duong. Ket thuc!" << endl;
  return 0;
}