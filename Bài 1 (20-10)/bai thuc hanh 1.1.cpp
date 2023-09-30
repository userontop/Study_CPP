/*
 
Truong trinh: bai 1
Ngay: 20-11
Tac gia: Ton Thien Tam

*/


#include<stdio.h>
int main(){
	printf("Nhap vao ky tu: ");
	char c;
	scanf("%c",&c);
	printf("Nhap vao so nguyen: ");
	int a;
	scanf("%d",&a);
	printf("Nhap vao so thuc:");
	float f;
	scanf("%f",&f);
	
	printf("\n%3c",c);
	printf("\n%6d",a);
	printf("\n%8.3f",f);
	return 0;
}

