#include<stdio.h>
int shh(int n);
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	if(shh(n) == 1)
		printf("so vua nhap la so hoan hao");
	else	
		printf("so vua nhap khong phai la so hoan hao");
	return 0;
}




int shh(int n){
	int a = 0;
	for(int i =1; i <= n/2; i++){
		if(n % i == 0){
			a += i;
		}
	}
	if (a == n)	return 1;
	else
		return 0;	
}
