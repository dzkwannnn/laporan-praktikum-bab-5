#include <iostream>
using namespace std;

int main (){
	
	int n; 
	cout<<"Berapa Angka: ";
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++){
		cout<<"Angka ke-"<<i+1<<"= "; 
		cin >> arr[i];
	}
	int mx = arr[0];
	for (int i = 1; i < n; i++){
	
		if (arr[i] > mx){
		 
			mx = arr[i];
		}
	}
	cout <<"Nilai Max adalah "<< mx << "\n";
	return 0;
}
