#include <iostream>
using namespace std;

int main() {
	cout << "CHUONG TRINH TINH CHU VI VA DIEN TICH HINH CHU NHAT" << endl;
	int chieudai, chieurong;
	cout << "Chieu dai HCN: ";
	cin >> chieudai;
	cout << "Chieu dai HCN: " << chieudai << " met" << endl;
	cout << "Chieu rong HCN: ";
	cin >> chieurong;
	cout << "Chieu rong HCN: " << chieurong << " met" << endl;
	cout << "Dien tich HCN: " << chieudai * chieurong << " met vuong" << endl;
	cout << "Chu vi HCN: " << (chieudai + chieurong) * 2 << " met";
	/*int so_Keo, so_Bich, tong_Keo;
	cout << "Nhap so keo trong mot goi: ";
	cin >> so_Keo;
	cout << "\Nhap so bich dang co: ";
	cin >> so_Bich;
	tong_Keo = so_Keo * so_Bich;
	cout << "\nSo keo co trong " << so_Bich << " bich la: " << tong_Keo;*/
	return 0;
}