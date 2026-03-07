#include <iostream>

using namespace std;

int n;

void nhap_n();
void nhap_mang(int a[]);
void sap_xep(int a[]);

int main(){
	nhap_n();
	int a[n];
	nhap_mang(a);
	sap_xep(a);
	return 0;
}

void nhap_n(){
	cin >> n;
}

void nhap_mang(int a[]){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void sap_xep(int a[]){
	for (int i = 0; i < n - 1; i++){
		int max_index = i;
		for (int j = i; j < n; j++){
			if(a[max_index] < a[j]){
				max_index = j;
			}
		}
		int temp = a[max_index];
		a[max_index] = a[i];
		a[i] = temp;
	}
	
	for (int k = 0; k < n; k++){
		cout << a[k] << " ";
	}
	cout << endl;
}
