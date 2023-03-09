#include <iostream>
using namespace std;

int main() {
	float n;
	cout << "Nhap vao quang duong da di duoc (km): ";
	cin >> n;
	if (n > 30)
		cout << "\nSo tien phai tra la: " << 15000 + (29 * 16500) + ((n - 30) * 16000) << " VND";
	else if (n > 1 && n < 30)
		cout << "\nSo tien phai tra la: " << 15000 + (n - 1) * 16500 << " VND";
	else if (n == 0)
		cout << "Ban co di dau dau -.-!!";
	else
		cout << "\nSo tien phai tra la: " << n * 15000 << " VND";
	return 0;
}