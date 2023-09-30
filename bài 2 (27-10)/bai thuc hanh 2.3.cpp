#include<stdio.h>

int main(){
	int n=101;
	while (not(n >= 0 && n <= 100)){
		printf("nhap vao so n: ");
		scanf("%d",&n);
		if(n < 0 || n > 100)
			printf("n khong hop le! vui long nhap lai.\n"); 
	}
	printf("n = %d",n);
	return 0;
}
