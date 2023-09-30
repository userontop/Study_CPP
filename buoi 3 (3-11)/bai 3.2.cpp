#include<stdio.h>
int gt1(int n);
float  ct(int n, int k);
int main(){
	int n, k;
	printf("nhap k = ");
	scanf("%d",&k);//k = 5
	printf("nhap n = ");
	scanf("%d",&n);//n = 3
	printf("to hop %dC%d= %.2f ", k, n,  (float)ct(k, n));//10
	return 0;
}



int gtl(int n){
	int a = 1;
	for(int i = 1; i <= n; i++){
		a *= i;
	}
	return a;
}

float ct(int n, int k){
	float c = gtl(n)/(gtl(k)*gtl(n - k));
	return c;
}
