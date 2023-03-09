#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Nhap a: ";
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0)
		cout << a << " la boi so cua 3 va 5";
	else
		cout << a << " khong phai la boi so cua 3 va 5";
	return 0;
}