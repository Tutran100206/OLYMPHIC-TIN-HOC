#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void nhap(string& a, string& b);
void chenso0(string& a, string& b);
void xoaso0thua(string& a);
void tong2solon(string a, string b);
void hieu2solon(string a, string b);

int main() {
	string a, b;
	nhap(a, b);
	tong2solon(a, b);
	hieu2solon(a, b);
	return 0;
}

void nhap(string& a, string& b) {
	cin >> a >> b;
}
void chenso0(string& a, string& b) {
	while (a.size() < b.size()) {
		a = "0" + a;
	}
	while (a.size() > b.size()) {
		b = "0" + b;
	}
}

void xoaso0thua(string& a) {
	while (a.size() > 1 && a[0] == '0') {
		a.erase(0, 1);
	}
}

void tong2solon(string a, string b) {
	string kq;
	int du = 0;
	chenso0(a, b);
	for (int i = a.size() - 1; i >= 0; i--) {
		int k = (a[i] - '0') + (b[i] - '0') + du ;
		if (k >= 10) {
			kq += ('0' + k - 10);
			du = 1;
		}
		else {
			kq += ('0' + k);
			du = 0;
		}
	}
	if (du == 1) {
		kq += '1';
	}
	reverse(kq.begin(), kq.end());
	xoaso0thua(kq);
	cout << kq << endl;
}

void hieu2solon(string a, string b) {
	int du = 0;
	string kq;
	xoaso0thua(a);
	xoaso0thua(b);
	bool ktradau = false;
	if (a.size() < b.size() || (a.size() == b.size() && a.compare(b) < 0)) {
		swap(a, b);
		ktradau = true;
	}
	chenso0(a, b);
	for (int i = a.size() - 1; i >= 0; i--) {
		int k = (a[i] - '0') - (b[i] - '0') - du;
		if (k < 0) {
			k += 10;
			du = 1;
		}
		else {
			du = 0;
		}
		kq += (k + '0');
	}
	if (ktradau) {
		cout << "-";
	}
	reverse(kq.begin(), kq.end());
	xoaso0thua(kq);
	if (kq == "") {
		cout << 0;
	}
	else {
		cout << kq;
	}
}