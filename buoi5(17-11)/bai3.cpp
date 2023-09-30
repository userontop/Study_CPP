#include<stdio.h>
#define maxd 100
#define maxc 100
void nhap(int a[][maxc],int d, int c);
void xuat(int a[][maxc],int d, int c);
void lkpt(int a[][maxc], int d, int c);
void ktmttong(int a[][maxc],int b[][maxc], int ad, int ac,int bd, int bc);
void ktmtnhan(int a[][maxc],int b[][maxc], int ad, int ac,int bd, int bc);
int main(){
	int a[maxd][maxc], b[maxd][maxc], nad, nac, nbd, nbc;
	printf("nhap so dong mang1: ");
	scanf("%d",&nad);
	printf("nhap so cot mang1: ");
	scanf("%d",&nac);
	printf("1.1nhap mang thu nhat:\n");
	
	printf("nhap so dong mang2 : ");
	scanf("%d",&nbd);
	printf("nhap so cot mang2: ");
	scanf("%d",&nbc);
//	nad = nac = nbd = nbc = 2;
	printf("1.1nhap mang thu nhat:\n");
	nhap(a, nad, nac);
	printf("1.2nhap mang thu hai:\n");
	nhap(b, nbd, nbc);
	printf("\n2.1In mang 1:\n");
	xuat(a, nad, nac);
	printf("\n2.2In mang 2:\n");
	xuat(b, nbd, nbc);
	printf("\n3.1cac so duy nhat trong mang1 : ");
	lkpt(a, nad, nac);
	printf("\n3.2cac so duy nhat trong mang2 : ");
	lkpt(b, nbd, nbc);
	ktmttong(a, b, nad, nac, nbd, nbc);
	ktmtnhan(a, b, nad, nac, nbd, nbc);
	return 0;	
}


void nhap(int a[][maxc],int d, int c){
	for(int i = 1; i <= d;i++){
		for(int j = 1;j <= c; j++){
			printf("[%d,%d] : ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
}


void xuat(int a[][maxc],int d, int c){
	for(int i = 1; i <= d;i++){
		for(int j = 1;j <= c; j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}


void lkpt(int a[][maxc], int d, int c){
	int e[maxd];
	int count = 0, ne = 0;
	for(int i = 1; i <= d;i++){
		for(int j = 1;j <= c;j++){
			count = 0;
			for(int k = 1;k <= d; k++){
				for(int f = 1;f <= c;f++){
					if(a[i][j] == a[k][f]){
						count++;
					}
				}
			}
			if(count == 1){
				e[ne] = a[i][j];
				ne++;
			}						
		}
	}
	for(int i = 0; i < ne; i++)
		printf("%5d", e[i]);
}


void ktmttong(int a[][maxc],int b[][maxc], int ad, int ac,int bd, int bc){
	int tong[maxd][maxc], i, j;
	if(ad != bd || ac != bc){
		printf("\n4.hai ma tran khong the cong.");
	}
	else {
		for (i = 1; i <= ad; i++){
			for (j = 1; j <= ac; j++) {
				tong[i][j] = a[i][j] + b[i][j];
			}
		}
		printf("\n4.tong 2 ma tran:\n");
		xuat(tong, i-1, j-1);
	}
}


void ktmtnhan(int a[][maxc],int b[][maxc], int ad, int ac,int bd, int bc){
	int tich[maxd][maxc], i, j;
	if(ad != bc || ac != bd){
		printf("\n5.hai ma tran khong the nhan.");
	}
	else {
		for (i = 1; i <= ad; i++){
			for (j = 1; j <= ac; j++) {
				for(int k = 1; k <= bd; k++){
					for(int g = 1;g <= bc;g++){
						tich[i][j] += a[i][j] * b[k][g];						
					}
				}
			}
		}
		printf("\n5.nhan 2 ma tran:\n");
		xuat(tich, i-1, j-1);
	}
}
