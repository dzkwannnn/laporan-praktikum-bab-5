#include <iostream>
using namespace std;

int main (){
	
	int R, C;
	cout<<"Masukkan jumlah baris: "; 
	cin >> R; 
	cout<<"Masukkan jumlah kolom : ";
	cin >> C;
	int m[10][10];
	for (int r=0;r<R;r++){
		for(int c=0;c<C;c++){
			cout<<"Masukkan elemen ke "<<"["<<r+1<<"]["<<c+1<<"] = "; 
			cin>>m[r][c];
		}
	}
	for (int r=0;r<R;r++) {
		int s=0;
		for(int c=0;c<C;c++){
			s=s+m[r][c];
		}cout<<"Jumlah baris ke "<<r+1<<"= "<<s<<"\n";
 	}
	return 0;
}


