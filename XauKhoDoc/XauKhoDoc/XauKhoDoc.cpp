//Xau kho doc la xau ma tat ca cac vi tri le 1,3,5,.... la chu cai tieng anh viet thuong
//Cac vi tri chan 2,4,6,8 .... la chu cai tieng anh viet hoa
//Chu y vi tri dau tinh = 1

#include<iostream>
#include<string>
using namespace std;

void nhap(string& a);
bool xaukhodoc(string a);

int main() {
	string a;
	nhap(a);
	if (xaukhodoc(a)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}

void nhap(string& a) {
	cin >> a;
}

bool xaukhodoc(string a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] % 2 == 0) {
			if (!(a[i] >= 'a' && a[i] <= 'z')) {
				return false;
			}
		}
		else {
			if (!(a[i] >= 'A' && a[i] <= 'Z')) {
				return false;
			}
		}
	}
	return true;
}
/*
* input: dIfFiCuLt
* output: Yes
* input: a
* ouput: Yes
* full 250/250, 25/25 testcase uteoj
* note: vi tri 1,3,5,... tuong ung 0,2,4,... trong code, tuong tu cac vi tri le
*/
