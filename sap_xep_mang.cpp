#include <iostream>

using namespace std;

void nhap_n(int &n);
void nhap_mang(int a[], int n);
void sap_xep(int a[], int k[], int trai, int phai);
void hop(int a[], int k[], int trai, int mid, int phai);
void xuat(int a[], int n);

int main(){
	int n;
	nhap_n(n);
	int a[n], k[n];
	nhap_mang(a, n);
	sap_xep(a, k, 0, n - 1);
	xuat(a, n);
}

void nhap_n(int &n){
	cin >> n;
}

void nhap_mang(int a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void sap_xep(int a[], int k[], int trai, int phai){
	if (trai == phai){
		return;
	}
	int mid = (trai + phai) / 2;
	sap_xep(a, k, trai, mid);
	sap_xep(a, k, mid + 1, phai);
	hop(a, k, trai, mid, phai);
}

void hop(int a[], int k[], int trai, int mid, int phai){
	int i = trai, j = mid + 1, pos = trai;
	while(i <= mid && j <= phai){
		if (a[i] > a[j]){
			k[pos] = a[i];
			i++;
			pos++;
		}
		else {
			k[pos] = a[j];
			j++;
			pos++;
		}
	}
	while (i <= mid){
		k[pos] = a[i];
		i++;
		pos++;
	}
	while (j <= phai){
		k[pos] = a[j];
		j++;
		pos++;
	}
	for (int m = trai; m <= phai; m++){
		a[m] = k[m]; 
	}
}

void xuat(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
