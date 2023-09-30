#include<stdio.h>

int main(){
	int j, k, l, m;
	for(int i = 100; i <=999;i++){
		//136
		j= i / 100;//j=1
		k= i % 100;//36
		l= k / 10;//3
		m= k % 10;//6
	//	if (j*l*m ==0)
	//		continue;
		if((j*l*m)%9==0)
			printf("\ncac so chia het cho 9: %d",i);
	}
	return 0;
}
