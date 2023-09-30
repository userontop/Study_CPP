#include<stdio.h>
int ucln(int a, int b);
int main(){
	int a, b;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	printf("uoc chung lon nhat cua %d va %d = %d", a, b, ucln(a, b));
	return 0;
}

int ucln(int a, int b){
	if(b == 0)
	 	return a;
	else
		return ucln(b,a%b);
}
