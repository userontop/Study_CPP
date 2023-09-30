#include<stdio.h>

int main(){
	int i=1;
	printf("cho phuong trinh co dang 2x + 3y = 5:");
	for(int x =-10; x <= 10;x++){
		for(int y =-5; y <= 5;y++){
			if(2*x+3*y==5){
				printf("\nnghiem thoa ma thu %d = (%d , %d)", i, x, y);
				i++;
			}
		}
	}
	return 0;
}
