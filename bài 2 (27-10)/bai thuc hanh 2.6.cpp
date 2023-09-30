#include<stdio.h>

int ucln(unsigned int a, unsigned int b){
	if (b == 0)
		return a;
	else 	
		return ucln(b, a % b);
}

int main(){
	int a, b;
	printf("nhap vao hai so nguyen duong a, b: \n");
	scanf("%u%u", &a, &b);
	printf("uoc chung lon nhat cua %u va %u là: %d", a, b, ucln(a,b));
	return 0;
}
