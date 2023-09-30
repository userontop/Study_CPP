/*
 
Truong trinh: bai 1
Ngay: 20-11
Tac gia: Ton Thien Tam

*/


#include<stdio.h>
int main(){
	printf("nhap vao ban kinh r cua hinh tron: ");
	float r;
	scanf("%f",&r);
	printf("Chu vi = 2*3.14*%.1f = %.2f\n\nDien tich = 2*3.14*%.1f*%.1f = %.2f", r, (float)2*3.14*r, r, r, (float)2*3.14*r*r);	
	return 0;
}
