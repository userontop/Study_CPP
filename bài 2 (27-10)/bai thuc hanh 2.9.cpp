#include<stdio.h>

int doi(int n){
	int kq = 0;
	while(not(n<=0)){
		kq = kq * 10 + (n % 10);
		n = n/10;
	}
		return kq;
}

int main(){
	unsigned int n;
	int kq = 0;
	printf("nhap vao so n: ");
	scanf("%u", &n);
	printf("so doi nguoc cua n la %d",doi(n));
	return 0;	
}
