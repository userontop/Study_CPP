/*

Ton Thien Tam

*/

#include<stdio.h>

int main(){
	float a, b;
	printf("nhap vao a va b trong pt ax + b = o:\na = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);	
	if(a == 0){
		if(b == 0)
			printf("-> Phung trinh vo so nguyem.");
		else
			printf("-> Phuong trinh vo nghiem.");
	}
	else
		printf("phuong trinh co 1 nguyem: x = -%.2f/%.2f = %2.2f", b , a, (float)-b / a);
		return 0;
}
