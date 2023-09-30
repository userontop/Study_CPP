#include<stdio.h>
#include<math.h>
#define MAX 100

struct phanso{
	int tu,mau;
};
//1
void nhap(phanso &p);
void nhapmang(phanso p[], int n);
//2
void xuat(phanso p);
void xuatmang(phanso p[], int n);
//3
void chuanhoa(phanso &p);
void chuanhoamang(phanso p[], int n);
//4
int ucln(int a, int b);
void rutgonps(phanso &p);
void rutgonmang(phanso p[], int n);
//5
phanso tong(phanso p1, phanso p2);
phanso tongmang(phanso p[], int n);
//6
float giatri(phanso p);
void pssmin(phanso p[], int n);
//7
void sxtang(phanso p[], int n);
int main(){
	phanso ps[MAX];
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("1.nhap vao phan so:\n");
	nhapmang(ps, n);
	printf("2.Print: \n");
	xuatmang(ps, n);
	chuanhoamang(ps, n);
	rutgonmang(ps, n);
	phanso t = tongmang(ps, n);
	printf("\n5.tong cac phan so = ");
	xuat(t);
	printf("\n6.phan so nho nhat = ");
	pssmin(ps, n);
	printf("\n7.phan so thu tu tang dan: \n");
	sxtang(ps, n);
	return 0;
}


void nhap(phanso &p){
	printf("\ntu: ");
	scanf("%d",&p.tu);
	do{
		printf("mau: ");
		scanf("%d",&p.mau);	
	}while(p.mau == 0);
}


void nhapmang(phanso p[], int n){
	for(int i = 0; i < n; i++){
		printf("\nps[%d]: ", i);
		nhap(p[i]);
	}
}


void xuat(phanso p){
	printf("%d/%d", p.tu, p.mau);
}


void xuatmang(phanso p[], int n){
	for(int i = 0; i< n;i++){
		printf("\nps[%d] = ", i+1);
		xuat(p[i]);
	}
}


void chuanhoa(phanso &p){
	if(p.mau < 0){
		p.tu = -p.tu;
		p.mau = -p.mau;
	}
}


void chuanhoamang(phanso p[], int n){
	for(int i= 0; i< n; i++){
		chuanhoa(p[i]);
	}
	printf("\n3.phan so chuan hoa: \n");
	xuatmang(p, n);
}


int ucln(int a, int b){
	if(b != 0)
		return ucln((b),(a)%(b));
}


void rutgonps(phanso &p){
	int uc = abs(ucln(p.tu, p.mau));
	p.tu = p.tu/uc;
	p.mau = p.mau/uc;
}


void rutgonmang(phanso p[], int n){
	for(int i = 0; i < n; i++){
		rutgonps(p[i]);
	}
	printf("\n4.phan so da rut gon: \n");
	xuatmang(p, n);
}


phanso tong(phanso p1, phanso p2){
	phanso p;
	p.tu = p1.tu * p2.mau + p2.tu * p1.mau;
	p.mau = p1.mau * p2.mau;
	rutgonps(p);
	return p;
}


phanso tongmang(phanso p[], int n){
	phanso t = p[0];
	for(int i = 1; i < n; i++){
		t = tong(t, p[i]);
		
	}
	return t;
}


float giatri(phanso p){
	return p.tu/p.mau;
}


void pssmin(phanso p[], int n){
	float min = giatri(p[0]);
	int k = 0;
	for(int i = 1;i < n; i++){
		if(min > giatri(p[i])){
			min = giatri(p[i]);
			k = i;
		}
	}
	xuat(p[k]);
}


void sxtang(phanso p[], int n){
	int a[MAX];
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(giatri(p[i]) < giatri(p[j])){
				a[i] = giatri(p[i]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(giatri(p[j]) == a[i]){
				printf("\t");
				xuat(p[j]);
			}
		}
	}
}












