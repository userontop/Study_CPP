#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int *a = (int*)malloc(n * sizeof(int));
	printf("\nNhap mang:");
	for(int i = 0; i < n; i++){
		printf("\n%d : ", i);
		scanf("%d", (a + i));
	}
	for(int i = 0; i < n; i++){
		printf("\ndia chi vung nho: %x", (a + i));
		printf("\ngia tri vung nho : %d", *(a + i));
	}
//	printf("nhap gia tri : ");
//	scanf("%d", a);
//	printf("\ngia tri vung nho con tro tro den: %d", *a);
	return 0;
}


