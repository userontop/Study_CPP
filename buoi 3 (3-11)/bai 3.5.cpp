#include<stdio.h>
int tong2(int n);
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	printf("tongbp tu 1 den %d = %d", n, tong2(n));
	return 0;
}



int tong2(int n){
	int tongbp;
	for(int i = 1; i <= n; i++){
		tongbp +=(i*i);
	}
	return tongbp;
}
