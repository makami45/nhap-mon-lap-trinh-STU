#include <iostream>
using namespace std;

void main() {
	char ten[15];
	float diemToan, diemVan, diemTB;
	cout << "\n Cho biet ten hv:";
	cin.getline(ten, 15);
	cout << "\n Nhap Diem Toan va Diem Van: ";
	cin >> diemToan >> diemVan;
	diemTB = (diemToan * 2 + diemVan) / 3;
	cout << "\n Chuong trinh tinh diem trung binh" << endl;
	cout << "Ho ten: " << ten << endl;
	cout << "Toan: " << diemToan << endl;
	cout << "Van: " << diemVan << endl;
	cout << "Diem TB: " << diemTB << endl;
	if (diemTB < 5)
		cout << "\nKet qua: Rot!" << endl;
	else
		cout << "\nKet qua: Dau!" << endl;
	if (diemTB >= 9)
		cout << "\nXep loai: Xuat sac" << endl;
	else if (diemTB >= 8)
		cout << "\nXep loai: Gioi" << endl;
	else if (diemTB >= 7)
		cout << "\nXep loai: Kha" << endl;
	else
		cout << "\nXep loai: Trung Binh" << endl;

}