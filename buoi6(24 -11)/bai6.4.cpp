#include<stdio.h>
#include<stdlib.h>

int main(){
	int *a =(int*)malloc(100 * sizeof(int));
	*a = 10;
	printf("gia tri cua vung con tro chi den : %d", *a);
	printf("\ndia chi con tro : %x", a);
	return 0;
}
