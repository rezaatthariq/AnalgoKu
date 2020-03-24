/*
Nama	: Muhammad Reza Atthariq Kori
NPM		: 140810180060
Kelas	: B
Program	: Selection Sprt
*/

#include <iostream>
#include<conio.h>

using namespace std;

int data[100],data2[100];
int n;

void swap(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) swap(pos,i);
    }
}

int main()
{

	cout<<"Jumlah Data : ";cin >> n;

	for(int i=1;i<=n;i++)
	{
		cout<<"Data "<<i<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}

	selection_sort();
	cout << "\n-------------------------------------" << endl;
	cout<<"Selection Sort : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<data[i];
	}

	getch();
}
