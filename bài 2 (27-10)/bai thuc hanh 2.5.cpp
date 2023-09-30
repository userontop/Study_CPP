#include<stdio.h>
#include<math.h>
int main(){
	unsigned int n;
	printf("nhap vao 1 so nguyen duong n: ");
	scanf("%u", &n);
	int a = sqrt(n);
	if(a * a == n)
		printf("%d la so chinh duong",n);
	else 
		printf("%d khong phai so chinh duong",n);
	return 0;
}
