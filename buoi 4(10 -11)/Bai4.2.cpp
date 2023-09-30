#include<iostream>
using namespace std;
int dem(string a);
int main(){
	string a;
	cout << "nhap vao chuoi : ";
	getline(cin,a);
	cout << "\nso luong phan tu trong chuoi : "<< dem(a) << " (bao gom khoang trong).";
		for (int i = 0; i<= dem(a); i++){
			if(a[i] != 0){
				a[i] = tolower(a[i]);
			}
		}
	a[0] = toupper(a[0]);
	for (int i = 0; i<= dem(a); i++){
		if(a[i] == ' '){
				i++;
			a[i] = toupper(a[i]);
		}
	}
	cout << endl << a;
	return 0;
}

int dem(string a){
	int count = 0;
	while(a[count] != 0)
		count++;
	return count;
}
