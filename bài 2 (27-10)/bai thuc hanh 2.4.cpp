#include<stdio.h>
#include<math.h>
int main(){
    int count = 0;
	unsigned int n;
	printf("nhap vao 1 so nguyen duong n: ");
	scanf("%u", &n);
	if(n <= 1)
		printf("%u khong phai so nguyen to.",n);
	for(int i = 2;i <= sqrt(n);i++){
		if(n % i ==0){
			count++;
		break;
		}	
	}
	if (count == 0)
		printf("%u la so nguyen to.",n);
	else
		printf("%u khong phai so nguyen to.",n);
	return 0;
}
