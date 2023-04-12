#include "thuvien.h"

void nhap_songuyen(int& n) {
	do {
		cout << "Nhap so nguyen (n>0): ";
		cin >> n;
	} while (n <= 0);
}
//CT kiem tra so nguyen to
bool KT_SNT(int n) {
	if (n < 2) return false;
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 2) {
		return true;
	}
	return false;
}
//CT kiem tra so chinh phuong
 bool KT_SCP(int n) {
	int tamngu = sqrt(n);
	if (tamngu * tamngu == n) {
		return true;
	}
		return false;
	
}
//CT kiem tra so hoan thien
bool KT_SHT(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n) return true; 
	return false;
}
//in ra stn nho hon n
void in_SNT(int n) {
	cout << "STN nho hon n la: ";
	for (int i = 1; i < n; i++) {
		if (KT_SNT(i) == true)
			cout << i << " ";
	}
}
//in ra scp nho hon n
void in_SCP(int n) {
	cout << "\nSCP nho hon n la: ";
	for (int i = 1; i < n; i++) {
		if (KT_SCP(i) == true)
			cout << i << " ";
	}
}
//in ra sht nho hon n
void in_SHT(int n) {
	cout << "\nSHT nho hon n la: ";
	for (int i = 1; i < n; i++) {
		if (KT_SHT(i) == true)
			cout << i << " ";
	}
}
// in ra n so nguyen to dau tien
void in_SNT2(int n) {
	cout << "\nn stn dau tien la: ";
	int dem = 0;
	int i = 0;
	do {
		if (KT_SNT(i) == true) {
			cout << i << " ";
			dem++;
		}
		i++;
	} while (dem < n);
}
// in ra n so chinh phuong dau tien la
void in_SCP2(int n) {
	cout << "\nn scp dau tien la: ";
	int dem = 0;
	int i = 1;
	do {
		if (KT_SCP(i) == true) {
			cout << i << " ";
			dem++;
		}
		i++;
	} while (dem < n);
}
//in n sht dau tien
void in_SHT2(int n) {
	cout << "\nn sht dau tien la: ";
	int dem = 0;
	int i = 1;
	do {
		if (KT_SHT(i) == true) {
			cout << i << " ";
			dem++;
		}
		i++;
	} while (dem < n);
}
//dem so chan le trong so chu so
void in_chanle(int n) {
	int temp;
	int dem = 0;
	int dem1 = 0;
	while (n > 0) {
		temp = n % 10;
		if (temp % 2 == 0) {
			dem = dem + 1;
		}
		else {
			dem1 = dem1 + 1;
		}
		n = n / 10;
	}
	cout <<"So cha	n trong n la: " << dem << endl;
	cout << "So le trong n la: " << dem1 << endl;
}
//in ra snt trong so n
void in_snt(int n) {
	int temp;
	int dem = 0;
	while (n > 0) {
		temp = n % 10;
		if (KT_SNT(temp) == true) {
			dem += 1;
		}
		n = n / 10;
	}
	cout << dem;
}