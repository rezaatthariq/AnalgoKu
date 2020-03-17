/*
  Nama	: Muhammad Reza Atthariq Kori
  NPM	: 140810180060
  Kelas	: B
*/

#include <iostream>
using namespace std;

typedef int angka[5];

void cariMaks(angka& x, int& maks, int& n)
{
	maks = x[1];
	int i = 2;
	while (i<= n){
		if(x[i]>maks){
			maks=x[i];
		}
	i++;
	}
	cout << "Nilai maks : "<<maks;	
}


main(){
	angka x;
	int n;
	int maks;
	cout <<"Masukkan banyak angka : ";cin>>n;
	for (int i=1;i<=n;i++){
		cin>>x[i];
	}
	cariMaks(x,maks,n);
	
}
