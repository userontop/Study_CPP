#include<stdio.h>
int kt( int a, int b, int c);
int cv( int a, int b, int c);
int main(){
	int a, b, c;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	printf("nhap c = ");
	scanf("%d",&c);
	if(kt(a, b, c) == 1)
		printf("a, b, c la ba canh cua tam gia co chu vi = %d", cv(a, b, c));
	else 
		printf("a, b, c khong tao thanh mot tam giac");
	return 0;
}


int kt( int a, int b, int c){
	if(a + b > c && b + c > a && a + c > b)
		return 1;
	else 
		return 0;
}


int cv( int a, int b, int c){
	int cv = a + b + c;
	return cv;
}
