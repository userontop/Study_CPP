#include<stdio.h>
#include<stdlib.h>

int main(){
	float fx;
	float *p1 = &fx;
	float *p2 = &fx;
	*p1 = 100;
	printf("fx = %f", fx);
	printf("\ndia chi fx = %x", &fx);
	printf("\np1: %f\n", *p1);
	*p2 = 50;
	printf("\nfx = %f", fx);
	printf("\ndia chi fx = %x", &fx);
	printf("\np2: %f", *p2);
	return 0;
}


