#include<stdio.h>
int main(){
	int *a;
	int b ;
	a = &b;
	printf("nhap gia tri bien: ");
	scanf("%d", a);
	printf("\ndia chi bien : %x", &b);
	printf("\ndia chi con tro : %x", a);
	printf("\ngia tri vung nho con tro chi den : %d", *a);
	return 0;
}
