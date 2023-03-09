#include <iostream>
using namespace std;

void main() {
	int ma_Truong;
	cout << "\n Cho biet ma truong (1..5):";
	cin >> ma_Truong;
	if (ma_Truong == 1)
	{
		cout << "\nDai hoc Tai chinh.";
		cout << "\nDia chi: 297 Nguyen Tri Phuong Quan 10";
	}
	else if (ma_Truong == 2)
	{
		cout << "\nDai hoc Kinh te.";
		cout << "\nDia chi: 59C Nguyen Dinh Chieu Quan 3";
	}
	else if (ma_Truong == 3)
	{
		cout << "\nDai hoc Khoa hoc Tu Nhien.";
		cout << "\nDia chi: 227 Nguyen Van Cu Quan 5";
	}
	else if (ma_Truong == 4)
	{
		cout << "\nDai hoc Bach Khoa.";
		cout << "\nDia chi: 268 Ly Thuong Kiet Quan 10";
	}
	else if (ma_Truong == 5)
	{
		cout << "\nDai hoc Cong Nghe Sai Gon.";
		cout << "\nDia chi: 180 Cao Lo Quan 8";
	}
	else
		cout << "\nGo sai ma truong!!!";
	system("pause");
}