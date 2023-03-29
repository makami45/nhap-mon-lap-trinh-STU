//lab4b
#include <iostream>
using namespace std;

void main() {
	int a, b, c, s = 0;
	char thoat;
	do {
		cout << "\nNhap a,b,c: ";
		cin >> a >> b >> c;
		s = 2 * a + 3 * b + 4 * (a + c) * b;
		cout << "\nGia tri cua bieu thuc can tinh la: " << s << endl;
		cout << "\nBan muon dung? Nhap Y or y de dung. Chon phim:";
		cin >> thoat;
	} while ((thoat != 'y') && (thoat != 'Y'));
	system("pause");
}