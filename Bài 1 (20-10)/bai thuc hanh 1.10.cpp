/*
 
Truong trinh: bai 1
Ngay: 20-11
Tac gia: Ton Thien Tam

*/


#include<stdio.h>
int main(){
	printf("nhap vao chieu dai 2 canh cua hinh chu nhat: \n");
	int d, r;
	scanf("%d%d", &d, &r);
	printf("Chu vi hinh chu nhat = %d\n\nDien tich hinh chu nhat = %d", (d + r)*2, d * r);
	return 0;
}
