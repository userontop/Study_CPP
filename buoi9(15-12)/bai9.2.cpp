#include<stdio.h>
#include <string.h>
#define MAX 100
struct hinhvuong{
	int a, cv ,s;
};

void nhap(hinhvuong &v);
void nhapmang(hinhvuong v[], int n);
void xuat(hinhvuong v);
void xuatmangall(hinhvuong v[], int n);


int chuvi(hinhvuong &v);
int dientich(hinhvuong &v);

int tongcvmang(hinhvuong v[], int n);
int tongtbs(hinhvuong v[], int n);

int main(){
	hinhvuong v[MAX];
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("\n1.nhap thong so: \n");
	nhapmang(v, n);
	printf("\n3.xuat tat ca thong tin cua cac hinh vuong:");
	xuatmangall(v, n);
	printf("\n4.tong chu vi cac hinh vuong = %d", tongcvmang(v, n));
	printf("\n5.trung binh cong dien tich = %d", tongtbs(v, n));	
	return 0;
}



void nhap(hinhvuong &v){
	printf("\nnhap chieu dai: ");
	scanf("%d", &v.a);
}

void nhapmang(hinhvuong v[], int n){
	for(int i = 0; i < n; i++){
		printf("\nhinh vuong (%d): \n", i+1);
		nhap(v[i]);
	}		
}

void xuat(hinhvuong v){
	printf("chieu dai = %d", v.a);
	printf("\nchu vi = %d", chuvi(v));
	printf("\ndien tich = %d\n", dientich(v));
}

int chuvi(hinhvuong &v){
	return v.cv = v.a * 4;
}


int dientich(hinhvuong &v){
	return v.s = v.a * v.a;
}


void xuatmangall(hinhvuong v[], int n){
	for(int i = 0; i < n; i++){
		printf("\nhinh vuong (%d): \n", i+1);
		xuat(v[i]);
	}		
}


int tongcvmang(hinhvuong v[], int n){
	int a = 0;
	for(int i = 0; i < n; i++){
		a += chuvi(v[i]);
	}		
	return a;
}


int tongtbs(hinhvuong v[], int n){
	int t = 0;
	for(int i = 0; i < n; i++){
		t += dientich(v[i]);
	}		
	return t;	
}


