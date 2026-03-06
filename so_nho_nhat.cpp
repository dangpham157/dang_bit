#include <iostream>

using namespace std;

int n;

void nhap_n();
void nhap_so(int so[]);
void tim_min(int so[]);

int main(){
	nhap_n();
	int num[n];
	nhap_so(num);
	tim_min(num);
	return 0;
}

void nhap_n(){
	cin >> n;
	while (n < 1 || n > 100){
		cout << "Hay nhap so nguyen >= 1 va <= 100 ";
		cin >> n;
	}
}

void nhap_so(int so[]){
	for (int i = 0; i < n; i++){
		cin >> so[i];
	}
}

void tim_min(int so[]){
	int min = so[0];
	for (int i = 0; i < n; i++){
		if (min > so[i]){
			min = so[i];
		}
	}  
	cout << min << endl;
}
