#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void nhap(string& a, string& b);
void xoaso0thua(string& a);
void tich2solon(string a, string b);

int main() {
	string a, b;
	nhap(a, b);
	tich2solon(a, b);
	return 0;
}

void nhap(string& a, string& b) {
	cin >> a >> b;
}

void xoaso0thua(string& a) {
	while (a.size() > 1 && a[0] == '0') {
		a.erase(0, 1);
	}
}

void tich2solon(string a, string b) {
	string kq(a.size() + b.size(), '0');
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for (int i = 0; i < a.size(); i++) {
		int du = 0;
		for (int j = 0; j < b.size(); j++) {
			int sum = (a[i] - '0') * (b[j] - '0') + (kq[i + j] - '0') + du;
			du = sum / 10;
			kq[i + j] = (sum % 10) + '0';
		}
		if (du > 0) {
			kq[i + b.size()] += du;
		}
	}
	reverse(kq.begin(), kq.end());
	xoaso0thua(kq);
	cout << kq;
}

// fulltest uteoj