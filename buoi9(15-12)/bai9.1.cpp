#include<stdio.h>
#include <string.h>
#define MAX 100
struct nhanvien{
	char ms[MAX], name[MAX], loai[MAX];
	int sp, luong;
};
 
void nhap(nhanvien *n);
void nhapmang(nhanvien nv[], int n);
void xuat(nhanvien n);
void xuatmang(nhanvien nv[], int n);
 
void xephang(nhanvien nv[], int n);
void xeploai(nhanvien &n);

void tongluongnv(nhanvien nv[], int n);

void xuatall(nhanvien n);
void xuatmangall(nhanvien nv[], int n);

void lk(nhanvien nv[], int n, char s[]);

float luongtb(nhanvien nv[], int n);

void find(nhanvien nv[], int n, char htnvct[]);
void findsp(nhanvien nv[], int n, int so);

void hoanvi(nhanvien &a1,nhanvien &a2);
void sapxep(nhanvien nv[], int n);
int main(){
	nhanvien nv[MAX];
	int n;
	printf("nhap n nhan vien: ");
	scanf("%d", &n);
	nhapmang(nv, n);
	printf("\nPrintf:\n\n");
	xuatmang(nv, n);
	
	printf("xep loai nhan vien: \n\n");
	xephang(nv, n);
	
	printf("\nluong cua nhan vien: \n\n");
	tongluongnv(nv, n);
	
	printf("\ncac nhan vien loai xuat sac\n\n");
	char s[] = "xuat sac";
	lk(nv, n, s);
	
	printf("\nXuat tat ca danh sach: \n\n");
	xuatmangall(nv, n);	
	printf("\n\ntong tb luong = %.2f$", luongtb(nv, n));
	char htnvct[MAX];
	
	printf("\nnhap ten nhan vien can tim: ");
	scanf("%s", &htnvct);
	find(nv, n, htnvct);
	
	int sosp;
	printf("\nnhap so luong san pham: ");
	scanf("%d", &sosp);
	printf("\nnhan vien co so sp tu %d tro len: \n\n", sosp);
	findsp(nv, n ,sosp);
	
	printf("\nsap xep mang tang dan: \n\n");
	sapxep(nv, n);
	xuatmangall(nv, n);
	return 0;
}



void nhap(nhanvien *n){
 	printf("nhap MSNV: ");
	scanf("%s", &n->ms);
	printf("nhap ho ten nhan vien: ");
	scanf("%s", &n->name);
	printf("nhap so sp: ");
	scanf("%d", &n->sp);
}
void nhapmang(nhanvien nv[], int n){
 	for(int i = 0; i < n; i++){
		printf("\nnhan vien (%d): \n", i+1);
		nhap(&nv[i]);
	}
}
void xuat(nhanvien n){
 	printf("%20s%24s%15d\n",n.ms, n.name, n.sp);
}
 
 
void xuatmang(nhanvien nv[], int n){
 	char s[] = " ";
 	printf("stt%7s|%7smsnv%7s|%7sho ten%7s|%7sso sp", s, s, s, s, s, s);
 	for(int i = 0; i< n; i++){
 		printf("\n%d", i+1);
 		xuat(nv[i]);
	 }
 	
}
 
 
void xeploai(nhanvien &n){
  	if(n.sp >= 100){
  		strcpy(n.loai, "xuat sac");
	}
	if(n.sp >=80 && n.sp <= 99){
		strcpy(n.loai, "tot");		
	}
	if(n.sp >=60 && n.sp <= 79){
		strcpy(n.loai, "dat");		
	}
	if(n.sp < 60){
		strcpy(n.loai, "chua dat");		
	}  
}
 
void xephang(nhanvien nv[], int n){
  	for(int i = 0; i< n; i++){
  		xeploai(nv[i]);
	}
	char s[] = " ";
  	printf("stt%7s|%7smsnv%7s|%7sho ten%7s|%7sxeploai", s, s, s, s, s, s);
	for(int i = 0; i< n; i++){
 	printf("\n%d%20s%24s%15s\n\n", i+1, nv[i].ms, nv[i].name, nv[i].loai);
	}
}
 



void tongluongnv(nhanvien nv[], int n){
	int tong;
	for(int i = 0; i< n; i++){
		nv[i].luong = nv[i].sp *10000;	
	}
	char s[] = " ";
	printf("stt%7s|%7smsnv%7s|%7sho ten%7s|%7sluong", s, s, s, s, s, s);
	for(int i = 0; i< n; i++){
 	printf("\n%d%20s%24s%15d\n", i+1, nv[i].ms, nv[i].name, nv[i].luong);
	}
}


float luongtb(nhanvien nv[], int n){
	float tongtb;
	for(int i = 0; i< n; i++){
		tongtb += nv[i].luong;	
	}
	return tongtb/n;
}



void xuatall(nhanvien n){
 	printf("%20s%24s%15d%20s%18d\n",n.ms, n.name, n.sp, n.loai, n.luong);
}
 
 
void xuatmangall(nhanvien nv[], int n){
 	char s[] = " ";
 	printf("stt%7s|%7smsnv%7s|%7sho ten%7s|%7sso sp%7s|%7sxeploai%7s|%7sluong", s, s, s, s, s, s, s, s, s, s);
 	for(int i = 0; i< n; i++){
 		printf("\n%d", i+1);
 		xuatall(nv[i]);
	 }
 	
}

void lk(nhanvien nv[], int n, char s[]){
	int t = 0;
	for(int i = 0; i< n; i++){
		if(strcmp(nv[i].loai, s) == 0){
			xuatall(nv[i]);
			t++;
		}
	}	
	if(t == 0)
		printf("\nkhong co nhan vien nao\n");
}

void find(nhanvien nv[], int n,char htnvct[]){
	int t = 0;
	for(int i = 0; i< n; i++){
		if(strcmp(nv[i].name, htnvct) == 0){
			xuatall(nv[i]);
			t++;
		}
	}
	if(t == 0)
		printf("\nkhong co nhan vien can tim\n");
}
 

void findsp(nhanvien nv[], int n, int so){
	int t= 0;
	for(int i = 0; i< n; i++){
		if(nv[i].sp >= so){
			xuatall(nv[i]);
			t++;
		}
	}
	if(t == 0)
		printf("\nkhong co nhan vien nao\n");
}


void hoanvi(nhanvien &a1,nhanvien &a2){
	nhanvien a3 = a1;
	a1 = a2;
	a2 = a3; 
}


void sapxep(nhanvien nv[], int n){
	for(int i = 0; i< n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(nv[i].name, nv[j].name) > 0){
				hoanvi(nv[i], nv[j]);
			}
		}
	}
}



