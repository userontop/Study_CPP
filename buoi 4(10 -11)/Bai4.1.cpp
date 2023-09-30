#include<stdio.h>
#include<iostream>
using namespace std;
int dem(string a);
void xoakhoangtrang(string &a);
/*
int main(){
	string a, c;
	cout <<"nhap chuoi : ";
	getline(cin,c);
	cout << "so luong ky tu : "<< dem(c) << " ( bao gom khoang cach )." << endl;
	cout << "In : " << c << "\n";
	cout << "\n" << "nhap vao ky tu can tim trong chuoi : ";
	getline(cin,a); 
	int count = 0, count1 = 0, count2 = 0, tam = 0, count3 = 0;
//	for (int i = 0;i<= 100;i++){
//		if(isspace(c[i])){
//		count2++;
//		cout << "->" << i << endl;
//		}
//	}
	for(int i = 0;i <= dem(c); i++){
		int k = i;
			if(c[i] == a[0]){
				tam = 0;
				count2 = 0;
				if(dem(a) == 1)
					count3++;
				else
					while(tam != dem(a)){
						
						if(c[k] == a[tam]){
							k++;
							count2++;
						}
						tam++;
					if(count2 == dem(a))
						count3++;
					}
			}
	}
	cout << "\nso luong ky tu "<< a <<" co trong chuoi  = " << count3;
	cout << "\n cac ky tu trong chuoi : ";
	for(int t = 0; t <= dem(c);t++){
		if(c[t]  == ' ')
			continue;
		cout << "\n" << c[t];
	}
	cout << "\nchuoi khi duoc xu ly khoang trang : ";
		for(int t = 0; t <= dem(c); t++){
			if(c[t] == ' ')
				continue;
		cout << c[t];
	}
	xoakhoangtrang(c);
	return 0;
}


void xoakhoangtrang(string &a){
	char c = ' ';
	int b;
	int countt = 0, tmp  = 0;
	for(int i = 0; i <= dem(a); i++){
		if(isspace(a[i]) and isspace(a[i+1])){
			for(int j = i;j <= dem(a);j++ ){
				if(a[j] != ' '){
					tmp = j;
					continue;
				}
			}
			for(int j = i; j <= i + tmp - 1; j++){
				int tam = dem(a);
				for(int k = i + 1; k <= tam -1; k++){
					if(a[k] != ' ' and isspace(a[k+1]))
						k +=  2;
					if(a[k] != ' ')
						continue;
					b = a[k];
					a[k] = a[k+1];
					a[k+1] = b;
				}
	 			--tam;
			}
		}
	}
//	cout << "\n" << a;
}


int dem(string a){
	int i = 0;
	while(a[i] != 0){
		i++;
	}
	return i;
}
*/

/*
//viet hoa
#include <iostream>
#include<string.h>
using namespace std;
int main(){
   char str[25];
   int i;
   cout<<"Nh?p vào m?t chu?i: ";
   cin>>str;
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=97&&str[i]<=122)
         str[i]=str[i]-32;
   }
   cout<<"Chu?i sau khi du?c chuy?n thành ch? hoa là "<<str;
   cout<<"\n------------------------------\n";
   cout<<"Chuong trình này du?c dang t?i Freetuts.net";
}
*/



/*

// dem khoang trang


#include<ctype.h>

int main(){
    int c[5] = {'\n', '2', 1, ' ', ','};
    for(int i = 0; i < 5; i++){
        if(isspace(c[i])) {
                printf("c[%d] la khoang trang\n",i);
        }
    }
}


*/



