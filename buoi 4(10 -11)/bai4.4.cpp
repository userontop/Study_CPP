/*
Ton Thien Tam
buoi4-4.4
*/

#include<stdio.h>
#include<math.h>
#define all 100
void nhapmang(int a[], int n);

void xuatmang(int a[], int n);

int tongsole(int a[], int n);

float tongtb(int a[], int n);

int imin(int a[], int n);

int vtmax(int a[], int n);

int kt(int a[],int n);

void ktsd(int a[], int n);

void lkpt(int a[], int n);

void lksochanle(int a[], int n);

int kiemtraNT(int n);

void lksnt(int a[], int n);

int ktscp(int n);

void lkscp(int a[], int n);

int main(){
	int arr[all], n ;
	printf("nhap vao so luong gia tri: ");
	scanf("%d",&n);
	n--;
	nhapmang(arr,n);
	printf("\nIn");
	xuatmang(arr,n); 
	printf("\ntong cac so le = %d", tongsole(arr, n));
	printf("\ntong trung binh cong = %.2f",tongtb(arr,n));
	printf("\ngia tri nho nhat = %d", imin(arr,n));
	printf("\nvi tri lon nhat = %d", vtmax(arr,n));
	if(kt(arr,n) == 1) printf("\ntat ca phan tu deu la so chan.");
	else printf("\ntat ca phan tu khong phai deu la so chan");
	ktsd(arr, n);
	printf("\ncac so lon hon tong tb cong:");
	lkpt(arr,n);
	lksochanle(arr, n);
	printf("\ncac so nguyen to co trong mang:");
	lksnt(arr,n);
	printf("\ncac so chinh phuong trong mang:");
	lkscp(arr,n);
	return 0;
}



void nhapmang(int a[], int n){
	for(int i =0; i <= n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}



void xuatmang(int a[], int n){
	for(int i = 0; i<= n;i++){
		int tam = i + 1;
		printf("\n[%d]= %d", tam, a[i]);
	}
}



int tongsole(int a[],int n){
	int tong = 0;
	for(int i = 0; i<= n;i++){
		if(a[i] % 2 !=0)
			tong += a[i];
	}
	return tong;
}



float tongtb(int a[], int n){
	float tongtb = 0;
	for(int i = 0; i<= n;i++)
			tongtb += a[i];
	tongtb /=2;
	return tongtb;
}



int imin(int a[],int n){
	int min = a[0];
	for(int i = 1; i <= n; i++)
		if(min > a[i] )
			min = a[i];
	return min;
}



int vtmax(int a[], int n){
	int max = 0;
	for(int i = 1; i <= n; i++)
		if(a[max] < a[i] )
			max = i;
	return max + 1;	
}



int kt(int a[], int n){
	for(int i = 0;i <= n; i++)
		if(a[i] % 2 !=0)
			return 0;
	return 1;
}



void ktsd(int a[],int n){
	int count = 0;
	int j = 0;
	for(int i = 0;i <= n; i++){
		if(a[i] >= 0){
			a[j] = a[i];
			j++;
			count++;
		}
	}
	if(count == 0)	printf("\nkhong co so duong trong mang");
	else{
		printf("\ncac so duong trong mang");
		xuatmang(a, j - 1);	
	}	
}



void lkpt(int a[], int n){
	int j = 1;
	int count = 0;
	for(int i = 0;i <= n; i++){
		if(a[i] > tongtb(a, n)){
			printf("\n[%d] = %d", j, a[i]);
			j++;
			count++;
		}
	}
	if(count == 0) printf(" khong co");	
}



void lksochanle(int a[], int n){
	int j = 0, f = 0, countc = 0, countl = 0;
	int b[all];
	int c[all];
	for(int i = 0; i <= n; i++){
		if(a[i] % 2 ==0){
			b[f] = a[i];
			f++;
			countc++;
		}
		if(a[i] % 2 !=0){
			c[j] = a[i];
			j++;
			countl++;
		}
	}
	if(countc != 0) {
		printf("\ncac so chan:");
		for(int i = 0;i <= f - 1;i++){
			printf("\t%d",b[i]);
		}
	}
	if(countl != 0) {
		printf("\ncac so le:");
		for(int i = 0;i <= j - 1;i++){
			printf("\t%d",c[i]);
		}
	}		
}



int kiemtraNT(int n){
	if(n == 1) return 0;
	for(int i = 2; i<= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}



void lksnt(int a[], int n){
	int count = 0;
	for(int i = 0;i <= n;i++){
		if(kiemtraNT(a[i]) == 1){
			printf("\n[%d] = %d", i, a[i]);
			count++;
		}
	}
	if(count == 0) printf("\tkhong co");
}



int ktscp(int n){
	int a = sqrt(n);
	if(a * a == n){
		return 1;
	}
	else return 0;	
}



void lkscp(int a[], int n){
	int count = 0;
	for(int i =0; i <= n;i++){
		if(ktscp(a[i]) == 1){
			printf("\n[%d] = %d", i, a[i]);
			count++;
		}
	}
	if(count == 0) printf("\tkhong co");	
}






