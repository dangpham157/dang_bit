#include <iostream>

using namespace std;

int n;

void diem();
void phan_loai(int diem);

int main(){
	diem();
	phan_loai(n);
	return 0;
}

void diem(){
	cin >> n;
	while (n < 1 || n > 100){
		cout << "Hay nhap so >= 1 va <= 100 ";
		cin >> n;
	}
}

void phan_loai(int diem){
	if (diem >= 85){
		cout << "Gioi";
	}
	else if (diem >= 70 && diem <85){
		cout << "Kha";
	}
	else if (diem < 50){
		cout << "Yeu";
	}
	else {
		cout << "Trung binh";
	}
}
