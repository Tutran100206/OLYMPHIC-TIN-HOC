#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void nhap(string& a);
void xuat(string a);
void daonguocchuoi(string a);
void inkituinhoacuachuoi(string a);
void timtudainhattrongchuoi(string a);
void chuanhoachuoi(string a);
void cacthaotactrenchuoi(string a);

int main() {
	string a;
	nhap(a);
	cacthaotactrenchuoi(a);
	return 0;
}

void nhap(string& a) {
	getline(cin, a);
}

void xuat(string a) {
	cout << a << endl;
}

void cacthaotactrenchuoi(string a) {
	xuat(a);
	daonguocchuoi(a);
	inkituinhoacuachuoi(a);
	timtudainhattrongchuoi(a);
	chuanhoachuoi(a);
}

void daonguocchuoi(string a) {
	reverse(a.begin(), a.end());
	xuat(a);
}

void inkituinhoacuachuoi(string a) {
	int i = 0;
	while (i < a.size()) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			cout << a[i] << endl;
		}
		i++;
	}
}

void timtudainhattrongchuoi(string a) {
	stringstream ss(a);
	string tam, tam1;
	vector<string>v;
	while (ss >> tam) {
		v.push_back(tam);
	}
	int i = 0, max = 0;
	while (i < v.size()) {
		int k = v[i].size();
		if (k > max) {
			max = k;
			tam1 = v[i];
		}
		i++;
	}
	xuat(tam1);
}

void chuanhoachuoi(string a) {
	stringstream ss(a);
	string tam;
	vector<string>v;
	while (ss >> tam) {
		v.push_back(tam);
	}
	int i = 0;
	while (i < v.size()) {
		cout << v[i];
		if (i != v.size() - 1) {
			cout << " ";
		}
		i++;
	}
}
/*
* input: Dh Spkt  Tp.hcm
* output:
* Dh Spkt  Tp.hcm
* mch.pT  tkpS hD
* D
* S
* T
* Tp.hcm
* Dh Spkt Tp.hcm
* note: full 100/100, 10/10 testcase uteoj
*/
