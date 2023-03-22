#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0;
    cout << "Nhap vao so nguyen n>=2";
    cin >> n;
    while (n<2) {
        cout << "Nhap vao so nguyen n>=2"<<endl;
        cin >> n;
    }
    for(i=1;i<n;i++) 
        if(n%i==0)
        sum+=i;
    if (sum=i)
    cout << n << " la so hoan thien!" << endl;
    else
    cout << n << " khong phai la so hoan thien!" << endl;
    system("pause");
    return 0;
}