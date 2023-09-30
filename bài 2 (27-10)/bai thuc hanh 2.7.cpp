#include<stdio.h>

int main(){
	int a, tong = 0;
	printf("-> tong = %d",tong);
	while(not(tong >= 100)){
		int i = 1;
		printf("\nnhap vao so nguyen thu %d:  ",i);
		scanf("%d",&a);
		i++;
		tong +=a;
		printf("-> tong = %d", tong);
	}
	printf("\n=> tong cac so nguyen moi nhap = %d",tong);
	return 0;
}
