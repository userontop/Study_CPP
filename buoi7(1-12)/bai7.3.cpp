#include<stdio.h>
#include<math.h>

struct diem{
	int x, y;
};

void nhap(diem &d);
void xuat(diem d);
float khoangcach(diem a, diem b);
int kiemtratruchoanh(diem a, diem b);
int kiemtratoado(diem a, diem b);

int main(){
	diem a, b;
	printf("1.nhap vao toa do: \n");
	nhap(a);
	nhap(b);
	printf("\nPrint: \ntoa do diem A: ");
	xuat(a);
	printf("\ntoa do diem B: ");
	xuat(b);
	printf("\n3.khoang cach hai diem A va B = %f", khoangcach(a, b));
	if(kiemtratruchoanh(a, b) == 1)
		printf("\n4.co diem nam tren truc hoanh.");
	else 
		printf("\n4.khong co diem nam tren truc hoang.");
	if(kiemtratoado(a, b) == 1)
		printf("\n5.co diem nam tren toa do.");
	else 
		printf("\n5.khong co diem nam tren toa do.");
	return 0;
}


void nhap(diem &d){
	printf("nhap x: ");
	scanf("%d", &d.x);
	printf("nhap y: ");
	scanf("%d", &d.y);
}


void xuat(diem d){
	printf("(%d,%d)", d.x, d.y);
}


float khoangcach(diem a,diem b){
	float d = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	return d;
}


int kiemtratruchoanh(diem a, diem b){
	if(a.x == 0 || b.x == 0)
		return 1;
	else 
		return 0;
}


int kiemtratoado(diem a, diem b){
	if((a.x == 0 && a.y == 0)||(b.x == 0 && b.y == 0))
		return 1;
	else 
		return 0;
}






