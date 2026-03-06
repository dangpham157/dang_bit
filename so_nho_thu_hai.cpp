#include <iostream>

using namespace std;

int n;

void nhap_n();
void nhap_so(int so[]);
void tim_min2(int so[]);

int main(){
	nhap_n();
	int num[n];
	nhap_so(num);
	tim_min2(num);
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

void tim_min2(int so[]){
	int min = so[0];
	for (int i = 0; i < n; i++){
		if (min > so[i]){
			min = so[i];
		}
	}
	
	int min2;
	for (int j = 0; j < n; j++){
		if (so[j] != min){
			min2 = so[j];
		}
	}  
	
	for (int k = 0; k < n; k++){
		if (min2 > so[k] && so[k] != min){
			min2 = so[k];
		}
	}  
	
	for (int m = 0; m < n; m++){
		if (so[m] == min2){
			cout << m + 1 << " ";
		}
	}
	cout << endl;
}
