#include<stdio.h>
float cv(float n);
#define PI 3.14
int main(){
	float r;
	printf("nhap r = ");
	scanf("%f",&r);
	printf("chu vi cua hinh tron = %.2f",cv(r));
	return 0;
}



float cv(float r){
	float cv = 2*PI*r;
	return cv;
}
