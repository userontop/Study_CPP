#include<stdio.h>
#include<string.h>
#define MAX 100
struct xe{
	char bangso[MAX], tenhang[MAX], nam[MAX];
	int giatien;
	
};
void nhap(xe &x);
void nhapmang(xe x[], int n);
void xuat(xe x);
void xuatmang(xe x[], int n);
void lk(xe x[], int n);
int findhsx(xe x[], int n, char hsx[]);
int tong(xe x[], int n);
xe hoanvi(xe &x1,xe &x2);
void sapxep(xe x[], int n);

int main(){
	xe x[MAX];
	int n;
	char hsx[MAX];
	printf("nhap so luong xe: ");
	scanf("%d", &n);
	nhapmang(x, n);
	printf("2.Print: \n");
	xuatmang(x, n);
	lk(x, n);
	printf("\n\nnhap hsx can tim: ");
	scanf("%s",hsx);
	printf("\n4.so luong xe co hsx: %s  = %d", hsx, findhsx(x, n, hsx));
	printf("\n5.tong gia tien cac xe co trong danh sach = %d", tong(x, n));
	printf("\n6.ds tang theo bang so:\n");
	sapxep(x, n);
	return 0;
}


void nhap(xe &x){
	printf("nhap bang so xe: ");
	scanf("%s", x.bangso);
	printf("nhap ten hang xe: ");
	scanf("%s",x.tenhang);
	printf("nam san xuat: ");
	scanf("%s", x.nam);
	printf("nhap gia tien: ");
	scanf("%d", &x.giatien);
}


void nhapmang(xe x[], int n){
	for(int i = 0; i < n; i++){
		printf("\nxe thu %d: \n", i +1);
		nhap(x[i]);
	}
}


void xuat(xe x){
	printf("%22s%26s%24s%20d", x.bangso, x.tenhang, x.nam, x.giatien);
}


void xuatmang(xe x[], int n){
	printf("stt\t|\tbang so xe\t|\tten hang xe\t|\tnam san xuat\t|\tgia tien\t|");
	for(int i = 0; i < n; i++){
		printf("\n%d", i+1);
		xuat(x[i]);
	}
}


void lk(xe x[], int n){
	xe x1[MAX];
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(strcmp(x[i].nam,"2010") < 0)
		x1[dem] = x[i]; 
		dem++;
	}
	printf("\n\n3.nhung xe duoc san xuat truoc 2010:\n");
	xuatmang(x1, dem);
}


int findhsx(xe x[], int n, char hsx[]){
	int count;
	for(int i = 0; i < n; i++){
		if(strcmp(x[i].tenhang, hsx) == 0)
			count++;
	}
	return count;
}


int tong(xe x[], int n){	
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += x[i].giatien;
	}
	return tong;
}

	
xe hoanvi(xe &x1,xe &x2){
	xe x3 = x1;
	x1 = x2;
	x2 = x3; 
}


void sapxep(xe x[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(x[i].bangso, x[j].bangso) > 0){
				hoanvi(x[i], x[j]);
			}
		}
	}
	xuatmang(x, n);
}


