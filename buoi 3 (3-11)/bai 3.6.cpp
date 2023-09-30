#include<stdio.h>
float tong2(int n);
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	printf("tongbp tu 1 den %d = %.2f", n, (float)tong2(n));
	return 0;
}



float tong2(int n){
	float tongbpnd;
	for(int i = 1; i <= n; i++){
		tongbpnd +=(float)1/(i*i);
	}
	return tongbpnd;
}
