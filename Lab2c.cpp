#include <iostream>
using namespace std;

void main() {
	int so;
	cout << "Nhap vao 1 so nguyen:";
	cin >> so;
	switch (so)
	{
	case 0:
		cout << "\nSo khong";
		break;
	case 1:
	case 2:
		cout << "\n So 1 hoac 2";
		break;
	case 3:
		cout << "\n So 3 day ma";
		break;
	case 4:
		cout << "\n So 4 day ne";
		break;
	case 5:
	case 6:
		cout << "\n So 5 hoac So 6";
	default:
		cout << "\n Nhung so khac";
		break;
	}

}