#include <iostream>
using namespace std;

void main() {
	int a, b, max;
	cout << "\n Nhap so thu nhat:";
	cin >> a;
	cout << "\n Nhap so thu hai:";
	cin >> b;
	if (a > b)
		max = a;
	else
		max = b;
	cout << "\n So lon nhat la: " << max << endl;
	system("pause");
}