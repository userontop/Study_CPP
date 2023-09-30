#include<stdio.h>
int main(){
	int b;
	int *a = &b;
	printf("nhap gia tri b: ");
	scanf("%d",a);
	printf("gia tri b: %d", b);
	printf("\nIn: %d", *a);
	return 0;
}
