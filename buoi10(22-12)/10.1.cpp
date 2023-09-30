#include<stdio.h>
#define MAX 100

void nhap(int a[], int n);

int tong(int a[], int n);

int imax(int a[], int n);

void sapxep(int a[], int n);

void ghimang(char filename[],char mode[], int a[], int n);

void xuatra(char filename[], int n);

void ghiso(char filename[], int k);

int main(){
	FILE *f;
	int a[MAX], n, t, max;
	printf("nhap n: ");
	scanf("%d", &n);
	nhap(a, n);
	char filename[] = "type.txt";
	f = fopen(filename, "w+");
	ghimang(filename, "w+", a, n);
	int b = imax(a, n);
	printf("max = %d", b);
	printf("\ntong = %d", tong(a, n));
	printf("\nxuat ra mang hinh: ");
	xuatra(filename, n);
	ghiso(filename, tong(a, n));
	ghiso(filename, b);
	sapxep(a, n);
	ghimang(filename,"ab", a, n);
	fclose(f);
	return 0;
}


void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}



int imax(int a[], int n){
	int amax = a[0];
	for(int i = 1; i < n; i++){
		if(amax < a[i]){
			amax = a[i];
		}
	}
	return amax;
}


int tong(int a[], int n){
	int t = 0;
	for(int i = 0; i < n; i++){
		t += a[i];
	}
	return t;
}


void hoanvi(int &a, int &b){
	int c = a; a = b; b = c;
}


void sapxep(int a[], int n){
	for(int i = 0; i< n - 1; i++){
		for(int j = i +1; j < n; j++){
			if(a[i] > a[j])
				hoanvi(a[i], a[j]);
		}
	}
}


void ghimang(char filename[], char mode[], int a[], int n){
	FILE *f = fopen(filename, mode);
	if(f != NULL){
		for(int i = 0; i < n; i++){
			fprintf(f, "%d ", a[i]);
		}
	}
	else{
		printf("khong the mo file");
	}
	fclose(f);
}


void xuatra(char filename[], int n){
	FILE *f = fopen(filename, "rb");
	if(f != NULL){
		
		int k;
		for( int i = 0; i < n; i++){
			fscanf(f, "%d ", &k);
			printf("%d ", k);
		}
	}
	else{
		printf("khong the mo file");
	}
	fclose(f);
}


void ghiso(char filename[], int k){
	FILE *f = fopen(filename, "ab");
	if(f != NULL){
			fprintf(f, "%d ", k);
	}
	else{
		printf("khong the mo file");
	}
	fclose(f);
}
