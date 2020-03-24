/*
Nama	: Muhammad Reza Atthariq Kori
NPM		: 140810180060
Kelas	: B
Program	: Insertion Sort
*/

#include <iostream>
#include <conio.h>

using namespace std;

int data[100],data2[100],n;

void insertion_sort()
{
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main()
{
	cout<<"Jumlah Data : "; cin>>n;

	for(int i=1;i<=n;i++)
	{
	  cout<<"Data "<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}

	insertion_sort();
	cout << "------------------------------------------------" << endl;
	cout<<"Insertion Sort : "<<endl;

	for(int i=1; i<=n; i++)
	{
	  cout<<data[i]<<" ";
	}

	getch();
}
