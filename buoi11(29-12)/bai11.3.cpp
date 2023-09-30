#include<stdio.h>
#include<string.h>
#define MAX 100
struct hoadon{
	char ms[MAX], mskh[MAX], khuyenmai[MAX];
	int tien;
};

void nhap(hoadon *hd);
void nhapmang(hoadon hd[], int n);
void khuyenm(hoadon hd[], int n);
void xuat(hoadon hd);
void xuatmang(hoadon hd[], int n);
int dem(hoadon h[], int n);
void demms(hoadon h[], int n, char a[]);
void findmax(hoadon h, int n, int max);
void hdmax(hoadon h[], int n);
void sapxep(hoadon h[], int n);

int main(){
	hoadon hd[MAX];
	int n;
	printf("so hoa don: ");
	scanf("%d", &n);
	nhapmang(hd, n);
	khuyenm(hd, n);
	xuatmang(hd, n);
	printf("\n\nso luong khach hang co tien tren 7000000: %d", dem(hd, n));
	char mskh2[MAX];
	printf("\nnhap ms khach hang trong hoa don: ");
	scanf("%s", &mskh2);
	printf("hoadon  co ma so khach hang %s:\n", mskh2);
	demms(hd, n, mskh2);
	printf("\nhoa don co so tien cao nhat: \n");
	hdmax(hd,n);
	sapxep(hd, n);
	printf("\nsap xep tang dan:\n ");
	xuatmang(hd, n);
	return 0;
}


void nhap(hoadon &hd){
	printf("ms hoa don: ");
	scanf("%s", &hd.ms);
	printf("ms khach hang: ");
	scanf("%s", &hd.mskh);
	printf("so tien: ");
	scanf("%d", &hd.tien);
}


void nhapmang(hoadon hd[], int n){
	for(int i = 0; i < n; i++){
		printf("hoa don %d: \n", i + 1);
		nhap(hd[i]);
	}
}


void khuyenm(hoadon hd[], int n){
	char s1[] = "phu kien", s2[] = "phieu khuyen mai";
	for(int i = 0; i < n; i++){
		if(hd[i].tien <= 5000000)
			strcpy(hd[i].khuyenmai, s1);
		else	strcpy(hd[i].khuyenmai, s2);
	}	
}


void xuat(hoadon hd){
	printf("%7s%16s%18d\t%s\n", hd.ms, hd.mskh, hd.tien, hd.khuyenmai);
}


void xuatmang(hoadon hd[], int n){
	char s[] = " ";
	printf("stt%5sms hoa don%5sms khach hang%5sso tien%10skhuyen mai\n",s, s, s, s);
	for(int i = 0; i < n; i++){
		printf("%d\t",i + 1);
		xuat(hd[i]);
	}
}


int dem(hoadon h[], int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(h[i].tien > 7000000)
			count++;
	}	
	return count;
}


void demms(hoadon h[], int n, char a[]){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(strcmp(h[i].mskh, a) == 0)
			xuat(h[i]);
	}	
}


void findmax(hoadon h[], int n, int max){
	for(int i = 0; i < n; i++){
		if(h[i].tien == max)
			xuat(h[i]);
	}		
}


void hdmax(hoadon h[], int n){
	int max = h[0].tien;
	for(int i = 1; i < n; i++){
		if(max < h[i]. tien)
			max = h[i]. tien;
	}	
	findmax(h, n, max);		
}


void hoanvi(hoadon &a1,hoadon &a2){
	hoadon a3 = a1;
	a1 = a2;
	a2 = a3; 
}


void sapxep(hoadon h[], int n){
	for(int i = 0; i< n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(h[i].mskh, h[j].mskh) > 0){
				hoanvi(h[i], h[j]);
			}
		}
	}
}
