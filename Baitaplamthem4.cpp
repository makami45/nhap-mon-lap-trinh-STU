#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Nhap vao gio, phut va giay: ";
	cin >> a >> b >> c;
	cout << "tong so giay la " << (a * 60 * 60) + (b * 60) + c << " giay";
	return 0;
}