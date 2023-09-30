#include<stdio.h>
#define maxd 100
#define maxc 100
void nhap(int a[][maxc],int d, int c);
void xuat(int a[][maxc],int d, int c);
void lkptdong_cot(int a[][maxc],int d, int c);
int kttang(int a[][maxc],int d, int c);
void tongdong(int a[][maxc],int d, int c);
int soluongsoduong_dong(int a[][maxc],int d, int c, int dong);
int imin(int a[][maxc],int d, int c);
void hoanvi2cot(int a[][maxc],int d, int c, int cot1, int cot2);
void swap(int &a,int &b);
void sapxeptang(int a[][maxc],int d, int c);
int main(){
	int a[maxd][maxc], d, c, dong;
	printf("nhap so dong: ");
	scanf("%d",&d);
	printf("nhap so cot: ");
	scanf("%d",&c);
	printf("1.nhap pt: \n");
	nhap(a, d, c);
	printf("\n2.IN:\n");
	xuat(a, d, c);
	printf("\n3.cac PT co dong = cot : ");
	lkptdong_cot(a, d, c);
	if(kttang(a, d, c) == 0){
		printf("\n4.ham khong tang dan.");
	}
	else printf("\n4.ham tang dan.");
	tongdong(a, d, c);
	printf("\nnhap vao dong: ");
	scanf("%d",&dong);
	printf("6.so luong  so duong tren dong = %d", soluongsoduong_dong(a,d,c,dong));
	printf("\n7.so nho nhat trong mang = %d", imin(a , d, c));
	int cot1,cot2;
	printf("\nnhap cot thu nhat: ");
	scanf("%d",&cot1);
	printf("\nnhap cot thu 2: ");
	scanf("%d",&cot2);
	printf("\n8.hoan vi 2 cot: \n");
	hoanvi2cot(a, d, c, cot1, cot2);
	sapxeptang(a, d, c);
	return 0;
}

void nhap(int a[][maxc],int d, int c){
	for(int i = 0; i < d;i++){
		for(int j = 0;j < c; j++){
			printf("[%d,%d] : ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
}


void xuat(int a[][maxc],int d, int c){
	for(int i = 0; i < d;i++){
		for(int j = 0;j < c; j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}


void lkptdong_cot(int a[][maxc],int d, int c){
	for(int i = 0; i < c; i++){
		for(int j = 0;j < d; j++){
			if(j == i)
				printf("%5d",a[i][j]);
		}
	}	
}


int kttang(int a[][maxc],int d, int c){
	for(int i = 0; i < c;i++){
		for(int j = 0;j < c - 1; j++){
			for(int k = j + 1;k < c; k++){
				if(a[i][j] > a[i][k])
					return 0;
			}
		}
	}
	return 1;
}


void tongdong(int a[][maxc],int d, int c){
	int tong = 0;
	for(int i = 0; i < d;i++){
		tong = 0;
		for(int j = 0;j < c; j++){
			tong += a[i][j];
		}
		printf("\n5.tong dong thu %d=  %d", i+1, tong);
	}
}


int soluongsoduong_dong(int a[][maxc],int d, int c, int dong){
	int count = 0;
	for(int i = 0;i < c; i++){
		if(a[dong-1][i] > 0)
		count++;
	}
	return count;
}


int imin(int a[][maxc],int d, int c){
	int min = a[0][0];
	for(int i = 0;i < d; i++){
		for(int j = 0;j < c;j++){
			if(min > a[i][j])
				min = a[i][j];
		}
	}
	return min;
}


void swap(int &a,int &b){
	int tmp = a;
		a = b;
		b = tmp;
}


void hoanvi2cot(int a[][maxc],int d, int c, int cot1, int cot2){
	for(int i = 0; i < c; i++)
		swap(a[i][cot1-1],a[i][cot2-1]);
	xuat(a, d, c);
}


void sapxeptang(int a[][maxc],int d, int c){
	for(int i = 0; i < d ; i++){
		for(int j = 0; j < c - 1; j++){
			for(int k = j + 1 ; k < c; k++){
				if(a[i][j] > a[i][k])
					swap(a[i][j], a[i][k]);	
				
			}
		}
	}
	printf("\n9.thu tu tang dan:\n");
	xuat(a, d, c);
}
