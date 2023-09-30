#include<stdio.h>
#include<math.h>
#define PI 3.14
struct elip{
	float x, y, r1, r2, cv, s;
};


void nhap(elip &e);
void xuat(elip e);
elip chuvi(elip &e);
elip dientich(elip &e);
int kiemtra(elip e);

int main(){
	elip e;
	printf("1.nhap thong so hinh ellipse: \n");
	nhap(e);
	printf("2.Print: ");
	xuat(e);
	if(kiemtra(e) == 1)
		printf("\n\n3.hinh ellipse tre co tam nam tren goc toa do.");
	else
		printf("\n\n3.hinh ellipse tre co tam khong nam tren goc toa do.");
	return 0;
}


elip chuvi(elip &e){
	e.cv = 2 * PI * sqrt((e.r1 * e.r2 + e.r2 * e.r2) / 2);
	return e;
}


elip dientich(elip &e){
	e.s = PI * e.r1 * e.r2;
	return e;	
}


void nhap(elip &e){
	printf("hoang do x: ");
	scanf("%f", &e.x);
	printf("tung do y: ");
	scanf("%f", &e.y);
	printf("ban kinh r1: ");
	scanf("%f", &e.r1);
	printf("ban kinh r2: ");
	scanf("%f", &e.r2);
}


void xuat(elip e){
	printf("\ntoa do = (%.2f,%.2f)", e.x, e.y);
	printf("\nban kinh r1 = %.2f", e.r1);
	printf("\nban kinh r2 = %.2f", e.r2);
	chuvi(e);
	printf("\nchu vi hinh elip = %f", e.cv);
	dientich(e);
	printf("\ndien tich hinh elip = %f", e.s);
}


int kiemtra(elip e){
	if(e.x == 0 && e.y == 0)
		return 1;
	else	
		return 0;
}



