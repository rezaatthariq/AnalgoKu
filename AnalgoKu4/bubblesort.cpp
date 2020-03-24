/*
Nama	: Muhammad Reza Atthariq Kori
NPM		: 140810180060
Kelas	: B
Program	: Bubble Sort
*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int arr[100],n,temp;

	cout<<"Jumlah Data : ";cin>>n;

	for(int i=0;i<n;++i){
		cout<<"Data "<<i+1<<" : ";cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout << "------------------------------------------------" << endl;
	cout<<"Bubble Sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}
