#include<stdio.h>
#define max 100
void nhap(int a[], int n);
void xuat(int a[], int n);
int findx(int a[], int n, int x);
void xoaPT(int a[], int n, int vt);
void socodauhieuchiahtcho2(int a[], int n);
void lkxy(int a[],int n);
void lkptlonhonliensau(int a[], int n);
void tachmang(int a[], int n);
void sapxep(int a[], int n);
void swap(int &a,int &b);
int main(){
	int a[max];
	int n, x, vt;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("1.Nhap vao cac pT:\n");
	nhap(a,n);
	printf("\n2.IN:");
	xuat(a, n);
	printf("\nnhap vao so can tim : ");
	scanf("%d", &x);
	printf("3.vi tri cua x trong mang a: %d", findx(a, n, x));
	printf("\nnhap vao vi tri can xoa: ");
	scanf("%d", &vt);
	xoaPT(a, n, vt);
	printf("\n5.cac so co dau hieu chia het cho 2:");
	socodauhieuchiahtcho2(a, n);
	printf("\n6.cac cap gia tri x <= y:");
	lkxy(a, n);
	printf("\n7.tach mang a: \n");
	tachmang(a, n);
	sapxep(a, n);
	return 0;
}

void nhap(int a[], int n){
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
}


void xuat(int a[], int n){
	for(int i = 0;i < n; i++){
		printf("%5d", a[i]);
	}
}


int findx(int a[],int n, int x){
	for(int i = 0;i < n; i++){
		if(a[i] == x){
			return i+1;
		}
	}
	return -1;
}


void xoaPT(int a[], int n, int vt){
    if(n <= 0){
        return;
    }
    if(vt < 0){
        vt = 0;
    }
    else if(vt >= n){
        vt = n-1;
    }
    for(int i = vt - 1; i < n; i++){
        a[i] = a[i+1];
    }
    n--;
    printf("4.mang sau khi xoa: ");
	xuat(a, n);
}


void socodauhieuchiahtcho2(int a[], int n){
	for(int i = 0; i < n; i++){
		int t = a[i]% 10;
		if(t == 0 ||(t%2==0 && t < 10)){
			printf("%5d",a[i]);
		}
	}
}


void lkxy(int a[],int n){
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			if(a[j] <= a[i]){
				printf("(%d, %d)", a[j], a[i]);
			}
		}
	}
}


void lkptlonhonliensau(int a[], int n){
	for(int i = 0; i < n; i++){
			if(a[i] <= a[i+1]){
				printf("(%d, %d)", a[i], a[i+1]);
			}		
	}	
}


void tachmang(int a[], int n){
	int b[max],c[max], nb = 0, nc = 0;
	for(int i = 0;i < n; i++){
		if(a[i] % 2 == 0){
			b[nb] = a[i];
			nb++;
		}
		else {
			c[nc] = a[i];
			nc++;
		}
	}
	printf("B:");
	xuat(b, nb);
	printf("\nC:");
	xuat(c, nc);
}


void swap(int &a,int &b){
	int tmp = a;
		a = b;
		b = tmp;
}


void sapxep(int a[],int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1 ; j < n;j++){
			if(a[i] > a[j])
				swap(a[i], a[j]);	
		}
	}
	printf("\n8.thu tu tang dan:");
	xuat(a,n);
}
