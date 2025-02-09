#include<iostream>
using namespace std;
void nhap(long int& a, long int& b);
long int daoso(long int a);
long int UCLN(long int a, long int b);
bool ktrasothanthien(long int a);
void sothanthientrongkhoangab(int a, int b);
int main() {
	long int a, b;
	nhap(a, b);
	sothanthientrongkhoangab(a, b);
	return 0;
}
void nhap(long int& a,  long int& b) {
	cin >> a >> b;
}
long int daoso(long int a) {
	long int b = 0;
	while (a > 0) {
		int x = a % 10;
		a /= 10;
		b = b * 10 + x;
		x = 0;
	}
	return b;
}
long int UCLN(long int a, long int b) {
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}
bool ktrasothanthien(long int a) {
	long int b = daoso(a);
	int x = UCLN(a, b);
	if (x == 1) {
		return true;
	}
	else {
		return false;
	}
}
void sothanthientrongkhoangab(int a, int b) {
	int dem = 0;
	for (int i = min(a, b); i <= max(a, b); i++) {
		if (ktrasothanthien(i)) {
			dem++;
		}
	}
	cout << dem;
}
/*
* input:
* 20 30
* output:
* 3
* note: full 10/10 testcase uteoj, 100/100
*/
