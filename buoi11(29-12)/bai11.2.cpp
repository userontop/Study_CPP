#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap(int a[], int n);
int tongbp(int a[], int n);
int snt(int a);
int demsnt(int a[], int n);

int main(){
	int a[MAX], n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	nhap(a, n);
	printf("tong binh phuong = %d", tongbp(a, n));
	printf("\nso luong so nguyen to: %d", demsnt(a, n));
	return 0;
}


void nhap(int a[],int n){
	for(int i = 0; i < n; i++){
		printf("[%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
}


int tongbp(int a[], int n){
	int tong = 0;	
	for(int i = 0; i < n; i++){
		tong += a[i] * a[i];
	}
	return tong;
}


int snt(int a){
	if(a < 2) return 0;
	for(int j = 2; j <= sqrt(a); j++){
		if(a % j == 0)
		return 0;
	}
	return 1;
}


int demsnt(int a[], int n){
	int count = 0;
	for(int i = 0;i < n;i++){
		if(snt(a[i]) == 1){
			count++;
		}
	}
	return count;
}

