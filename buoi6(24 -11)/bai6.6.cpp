#include<stdio.h>
#define MAX1 100
#define MAX2 100
void input(int a[][MAX2], int d, int c);
void output(int a[][MAX2], int d, int c);
void sapxepdongcot(int a[][MAX2], int d, int c);
void swap(int *a, int *b);
int main(){
	int a[MAX1][MAX2], d, c;
	printf("nhap vao dong: ");
	scanf("%d", &d);
	printf("nhap vao cot: ");
	scanf("%d", &c);
	printf("\nNhap mang :\n");
	input(a, d, c);
	printf("\nIn: \n");
	output(a, d, c);
	sapxepdongcot(a, d, c);
	return 0;
}


void input(int a[][MAX2], int d, int c){
	for(int i = 0; i < d; i++){
		for(int j = 0; j < c; j++){
			printf("[%d,%d] : ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
}


void output(int a[][MAX2], int d, int c){
	for(int i = 0; i < d; i++){
		for(int j = 0; j < c; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n\n");
	}
}


void swap(int *a, int *b){
	int tmp = *a;
		*a = *b;
		*b = tmp;
}


void sapxepdongcot(int a[][MAX2], int d, int c){
	int p[MAX1];
	int id = 0;
	for(int i = 0; i < d; i++){
		for(int j = 0;j < c;j++){
			p[id] = a[i][j];
			id++;
		}
	}
	int tam = d * c;
	for(int i = 0; i < tam - 1; i++){
		for(int j = i + 1; j < tam;j++){
			if(p[i] > p[j])
				swap(&p[i], &p[j]);
		}
	}
	printf("\nMang tang dan:\n");
	for(int i = 0; i < d*c; i++){
		if(i % c == 0){
			printf("\n\n");
		}
		printf("%5d", p[i]);
	}
}
