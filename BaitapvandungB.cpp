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
	cout << "*********************************************" << endl;
	cout << "Chuong trinh tinh diem trung binh" << endl;
	cout << "\nHo ten: " << ten << endl;
	cout << "\nToan: " << diemToan << endl;
	cout << "\nVan: " << diemVan << endl;
	cout << "\nDiem TB: " << diemTB << endl;
	if (diemTB < 5)
		cout << "\nKet qua: Rot!" << endl;
	else
		cout << "\nKet qua: Dau!" << endl;
	if (diemTB >= 9)
		cout << "\nXep loai: Xuat sac" << endl;
	else if (diemTB >= 8 && diemTB < 9)
		cout << "\nXep loai: Gioi" << endl;
	else if (diemTB >= 6.5 && diemTB < 8)
		cout << "\nXep loai: Kha" << endl;
	else if (diemTB >= 5 && diemTB < 6.5)
		cout << "\nXep loai: Trung Binh" << endl;
	else
		cout << "\nXep loai: Yeu" << endl;

	cout << "*********************************************" << endl;

}