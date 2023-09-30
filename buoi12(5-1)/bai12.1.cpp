#include<stdio.h>
#define MAX 100

void nhap(int a[], int n);

void xuat(int a[], int n);

void tonglk(int a[], int n);

int imind(int a[], int n);

float tbcong(int a[], int n);



int main(){
	int a[MAX], n;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("nhap mang:\n");
	nhap(a, n);
	printf("\nxuat mang:\n");
	xuat(a, n);
	printf("\ntong lien ke:");
	tonglk(a, n);
	printf("\nphan tu duong nhho nhat trong mang = %d", imind(a, n));
	printf("\ntrung binh cong cac phan tu chan = %f",tbcong(a, n));
	return 0;
}


void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("[a%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
}


void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("[a%d] = %d,\t", i + 1, a[i]);
	}
}


void tonglk(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("\n(%d,%d) = %d", a[i], a[i+1], a[i] + a[i+1]);
	}
}


int imind(int a[], int n){
	int min = a[0];
	for(int i = 0; i < n; i++){
		if(min > a[i] && a[i] > 0)
			min = a[i];
	}
	return min;
}


float tbcong(int a[], int n){
	int tong, count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			tong+= a[i];
			count++;
		}
	}
	return (float)tong/count;
}

