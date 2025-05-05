#include<iostream>
using namespace std;

bool ktrasnt(int a);
void phantichsnt(int a);

int main() {
	int a;
	cin >> a;
	if (ktrasnt(a)) {
		cout << a << " la so nt";
	}
	else {
		phantichsnt(a);
	}
	return 0;
}

bool ktrasnt(int a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

void phantichsnt(int a) {
	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			while (a % i == 0) {
				cout << i;
				if (i != a) {
					cout << ".";
				}
				a /= i;
			}
		}
	}
}