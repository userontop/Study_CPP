#include<iostream>
using namespace std;
int dem(string a);
void xuat(char a, int n);
int main(){
	string a;
	char b[100];
	int count, j = 0;
	cout << "nhap vao chuoi : ";
	getline(cin, a);
	for(int i = 0;i <= dem(a);i++){
		if(not((int)a[i] <= 57 && (int)a[i] >= 48 )){
			b[j] = a[i];
			j++;
		}
	}
	cout << endl;
	for(int i = 0;i<=j;i++){
		cout << b[i];
	}
	return 0;
}

int dem(string a){
	int count = 0;
	while (a[count] != 0)
	count++;
	return count;
}

