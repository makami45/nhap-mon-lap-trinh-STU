#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap vao so co 2 chu so: ";
	cin >> n;
	cout << "Tong so cac chu so cua " << n << " la " << (n / 10) + (n % 10);
	return 0;
}