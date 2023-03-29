//lab4c
#include <iostream>
using namespace std;
void main() {

	int n;
	do {
		cout << "|Nhap n > 0: ";
		cin >> n;
	} while (n <= 0);
	if (n == 2)
		cout << "\n" << n << " La so nguyen to.";
	else if (n >= 2) {
		int i = 1;
		do {
			i++;
		} while ((i < n) && (n % i != 0));
		if (i == n)
			cout << "\n" << n << " la so nguyen to.";
		else
			cout << "\n" << n << " khong phai la so nguyen to.";
	}
	else
		cout << "\nSo nguyen nhap vao <2";
	system("pause");
}