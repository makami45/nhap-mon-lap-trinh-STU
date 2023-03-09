#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (sqrt(n) * sqrt(n) == n)
		cout << "do la so chinh phuong";
	else
		cout << "Khong phai la so chinh phuong";
	return 0;
}