#include<stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n % 2 == 0)
		printf("-> so chan.");
	else
		printf("-> so le.");
	return 0;
}
