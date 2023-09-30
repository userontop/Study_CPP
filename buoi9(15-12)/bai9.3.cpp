#include<stdio.h>
#include <string.h>
#define MAX 100
struct chunhat{
	int d, r, cv ,s;
};

void nhap(chunhat &v);
void nhapmang(chunhat v[], int n);
void xuat(chunhat v);
void xuatmang(chunhat v[], int n);

int chuvi(chunhat &v);
int dientich(chunhat &v);

void lk(chunhat cn[], int n);

void hoanvi(chunhat &a1,chunhat &a2);
void sapxep(chunhat cn[], int n);
int main(){
	chunhat cn[MAX];
	int n;
	printf("nhap vao n: ");
	scanf("%d", &n);
	printf("\n1.nhap cac thong so: ");
	nhapmang(cn, n); 
	printf("\n2.xuat cac thong so: ");
	xuatmang(cn, n);
	printf("\n3.nhung hinh chu nhat co dien tich bang chu vi: ");
	lk(cn, n);
	printf("\n4.sap xep tang dan theo dien tich: \n");
	sapxep(cn, n);
	xuatmang(cn, n);
	return 0;
}



void nhap(chunhat &v){
	printf("\nnhap chieu dai: ");
	scanf("%d", &v.d);
	printf("nhap chieu rong: ");
	scanf("%d", &v.r);
}


void nhapmang(chunhat v[], int n){
	for(int i = 0; i < n; i++){
		printf("\nhinh chu nhat (%d): \n", i+1);
		nhap(v[i]);
	}
}


void xuat(chunhat v){
	printf("chieu dai = %d", v.d);
	printf("\nchieu rong = %d", v.r);
	printf("\nchu vi = %d", chuvi(v));
	printf("\ndien tich = %d\n", dientich(v));
}


void xuatmang(chunhat v[], int n){
	for(int i = 0; i < n; i++){
		printf("\nhinh chu nhat (%d): \n", i+1);
		xuat(v[i]);
	}	
}


int chuvi(chunhat &v){
	return v.cv = (v.d + v.r)* 2;
}


int dientich(chunhat &v){
	return v.s = v.d * v.r;
}


void lk(chunhat cn[], int n){
	int t = 0;
	for(int i = 0; i < n; i++){
		if(dientich(cn[i]) == chuvi(cn[i])){
			printf("\nhinh thu %d: \n", i+1);
			xuat(cn[i]);
		}
	}
	if(t == 0)
		printf("khong co!");	
}


void hoanvi(chunhat &a1,chunhat &a2){
	chunhat a3 = a1;
	a1 = a2;
	a2 = a3; 
}


void sapxep(chunhat cn[], int n){
	for(int i = 0; i< n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(cn[i].s > cn[j].s)
				hoanvi(cn[i], cn[j]);
		}
	}	
}

