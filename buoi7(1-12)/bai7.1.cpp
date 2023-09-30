#include<stdio.h>
#include<math.h>
struct phanso{
	int tu, mau;
};


void nhap(phanso &p);
void xuat(phanso p);
void chuanhoa(phanso &p);
void rutgon(phanso &p);
int ucln(int a, int b);
phanso tong(phanso p1, phanso p2);
phanso hieu(phanso p1, phanso p2);
phanso tich(phanso p1, phanso p2);
phanso thuong(phanso p1, phanso p2);


int main(){
	phanso p1,p2;
	printf("1.nhap phan so 1: ");
	nhap(p1);
	printf("nhap phan so 2: ");
	nhap(p2);
	printf("\n2.phan so 1: ");
	xuat(p1);
	printf("\nphan so 2: ");
	xuat(p2);
	chuanhoa(p1);
	printf("\n\n3.phan so chuan hoa 1: ");
	xuat(p1);
	chuanhoa(p2);
	printf("\nphan so chuan hoa 2: ");
	xuat(p2);
	rutgon(p1);
	printf("\n\n4.phan so rut gon 1: ");
	xuat(p1);
	rutgon(p2);
	printf("\nphan so rut gon 2: ");
	xuat(p2);
	printf("\n\n5.tong 2 phan so = ");
	phanso t = tong(p1, p2);
	xuat(t);
	printf("\n\n6.hieu 2 phan so = ");
	phanso h = hieu(p1, p2);
	xuat(h);
	printf("\n\n7.tich 2 phan so = ");
	phanso tih = tich(p1, p2);
	xuat(tih);
	printf("\n\n8.thuong 2 phan so = ");
	phanso thg = thuong(p1, p2);
	xuat(thg);
	return 0;
}


void nhap(phanso &p){
	printf("\ntu: ");
	scanf("%d", &p.tu);
		printf("mau: ");
		scanf("%d", &p.mau);
}


void xuat(phanso p){
	printf("%d/%d", p.tu, p.mau);
}


void chuanhoa(phanso &p){
	if(p.mau < 0){
		p.mau = -p.mau;
		p.tu = -p.tu;
	}
}


int ucln(int a, int b){
	if(b != 0)
		return ucln((b),(a)%(b));
}


void rutgon(phanso &p){
	int uc = abs(ucln(p.tu, p.mau));
	p.tu = p.tu/uc;
	p.mau = p.mau/uc;
}


phanso tong(phanso p1, phanso p2){
	phanso p;
	p.tu = p1.tu * p2.mau + p2.tu * p1.mau;
	p.mau = p1.mau * p2.mau;
	rutgon(p);
	return p;
}


phanso hieu(phanso p1, phanso p2){
	phanso p;
	p.tu = p1.tu * p2.mau - p2.tu * p1.mau;
	p.mau = p1.mau * p2.mau;
	rutgon(p);
	return p;
}


phanso tich(phanso p1, phanso p2){
	phanso p;
	p.tu = p1.tu * p2.tu;
	p.mau = p1.mau * p2.mau;
	rutgon(p);
	return p;
}


phanso thuong(phanso p1, phanso p2){
	phanso p;
	p.tu = p1.tu * p2.mau;
	p.mau = p1.mau * p2.tu;
	rutgon(p);
	return p;
}


