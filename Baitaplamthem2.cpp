#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Nhap vao a va b: ";
	cin >> a >> b;
	cout << "Ket qua chia lay phan nguyen va phan du cua " << a << " va " << b << " la " << a / b << " va " << a%b;
	return 0;
}