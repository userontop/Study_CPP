#include<stdio.h>
#define MAX 100

void chan(int a[], int n);

int tong(int a[], int n);

void sapxep(int a[], int n);

int main(){
	FILE *f;
	int a[MAX], n = 0, t, max;
	f = fopen("dulieu.txt", "rt");
	if(f != NULL){
		printf("phan tu mang: ");
		while(!feof(f)){
			fscanf(f, "%d ", &a[n]);
			printf("%d ",a[n]);
			n++;
		}
		fclose(f);	
	}
	else{
		printf("khong the mo file");
	}
	chan(a, n);
	FILE *fd = fopen("ketqua.txt", "ab");
	fprintf(f, "%d ", tong(a, n));
	sapxep(a, n);
	if(f != NULL){
		for(int i = 0; i < n; i++){
			fprintf(fd, "%d ", a[i]);	
		}
		fclose(fd);	
	}
	else{
		printf("khong the mo file");
	}
	return 0;
}


void chan(int a[], int n){
	FILE *fd = fopen("ketqua.txt", "wt");
	if(fd != NULL){
		for(int i = 0; i < n; i++){
			if(a[i] % 2 == 0){
				fprintf(fd, "%d ", a[i]);
			}
		}
	}
	else{
		printf("\nkhong the mo file");
	}
	fclose(fd);
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
