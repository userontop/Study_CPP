/*
 
Truong trinh: bai 1
Ngay: 20-11
Tac gia: Ton Thien Tam

*/


#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao mot so nguyen n: ");
	scanf("%d",&n);
	printf("So phan nguyen khi chia cho 6 = %f",(float)n/6);
	printf("\nSo phan du khi chia cho 6 = %d", n %= 6);
	return 0;
}
