//lab4a
#include <iostream>
using namespace std;

void main() {
	int n , sum = 0;
	do {
		cout << "\nNhap so nguyen n: ";
		cin >> n;
	} while (n<=0);
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << "\nTong can tinh la: " << sum << endl;
	system("pause");
}