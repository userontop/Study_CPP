#include<stdio.h>
#include<string.h>
#define MAX 100
struct thietbi{
	char ms[MAX], ten[MAX],loai;
	int sl, gia;
};

void nhap(thietbi &t);

void nhapmang(thietbi t[], int n);

void phanloai(thietbi t[], int n);

void xuat(thietbi t);

void xuatmang(thietbi t[], int n);

int tongsl(thietbi t[], int n);

void lkgia(thietbi t[], int n, int dongia);

int gia(thietbi t);

int giamax(thietbi t[], int n);

void giacao(thietbi t[], int n);

void hoanvi(thietbi &t1, thietbi &t2);

void sx(thietbi t[], int n);



int main(){
	thietbi tb[MAX];
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("\nnhap thong tin:\n");
	nhapmang(tb, n);
	phanloai(tb, n);
	printf("\nxuat thong tin: \n");
	xuatmang(tb, n);
	printf("\ntong so luong = %d", tongsl(tb, n));
	int dongia;
	printf("\nnhap don gia co san: ");
	scanf("%d", &dongia);
	printf("\ncac thiet bi co don gia < don gia  co san: \n");
	lkgia(tb, n, dongia);
	printf("\nnhung thiet bi co gia cao nhat: \n");
	giacao(tb , n);
	printf("\nsap xep mang tang dan: \n");
	sx(tb, n);
	xuatmang(tb, n);
	return 0;
}


void nhap(thietbi &t){
	printf("ma so: ");
	scanf("%s", &t.ms);
	printf("ten: ");
	scanf("%s", &t.ten);
	printf("so luong: ");
	scanf("%d", &t.sl);
	printf("gia: ");
	scanf("%d", &t.gia);
}


void nhapmang(thietbi t[], int n){
	for(int i= 0; i < n; i++){
		printf("thiet bi %d:\n",i+1);
		nhap(t[i]);
	}
}


void phanloai(thietbi t[], int n){
	for(int i = 0; i < n; i++){
		if(t[i].sl >= 100)
			t[i].loai = 'A';
		else
			t[i].loai = 'B';
	}
}


void xuat(thietbi t){
	printf("\nma so: %s", t.ms);
	printf("\tten: %s",t.ten);
	printf("\tloai %c ", t.loai);	
	printf("\tso luong: %d", t.sl);
	printf("\tgia: %d\n", t.gia);
}


void xuatmang(thietbi t[], int n){
	for(int i = 0; i< n; i++){
		printf("\nthiet bi %d", i+1);
		xuat(t[i]);
	}
}


int tongsl(thietbi t[], int n){
	int tong;
	for(int i= 0; i < n; i++){
		tong += t[i].sl;
	}
	return tong;
}


void lkgia(thietbi t[], int n, int dongia){
	for(int i= 0; i < n; i++){
		if(t[i].gia <= dongia)
			printf("\nthiet bi %s", t[i].ten);
	}
}


int gia(thietbi t){
	return t.sl * t.gia; 	
}

int giamax(thietbi t[], int n){
	int max = gia(t[0]);
	for(int i = 1; i< n; i++){
		if(max < gia(t[i]))
			max = gia(t[i]);
	}		
	return max;
}

void giacao(thietbi t[], int n){
	for(int i = 0; i < n; i++){
		if(gia(t[i]) == giamax(t, n))
			printf("\n%s_gia tien= %d", t[i].ten, gia(t[i]));
	}
}


void hoanvi(thietbi &t1, thietbi &t2){
	thietbi t3 = t1;
	t1 = t2;
	t2 = t3;
}


void sx(thietbi t[], int n){
	for(int i = 0; i < n -1; i++){
		for(int j = i +1; j < n; j++){
			if((int)t[i].loai > (int)t[j].loai){
				hoanvi(t[i], t[j]);
			}
		}
	}
}


