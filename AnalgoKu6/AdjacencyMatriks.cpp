/*
Nama	: Muhammad Reza Atthariq Kori
NPM	: 140810180060
Kelas	: B
Program	: Program Representasi Adjacency Matriks
*/

#include <iostream>
using namespace std;

int vertArr[20][20];
int count = 0;

void printMatrix(int v){
    int i, j;
    for (i = 1; i <= v; i++){
        for (j = 1; j <= v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v){ 
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}

int main(int argc, char *argv[]){
    int v;
    cout << "Masukkan jumlah matrix : "; cin >> v;
    
    int pilihan,a,b;
    while(true){
        cout << "Pilih menu : " << endl;
        cout << "1. Tambah edge " << endl;
        cout << "2. Print Matriks" << endl;
        cout << "3. Exit " << endl;
        cout << "Masukan pilihan : "; cin >> pilihan;
        switch (pilihan){
            case 1:
                cout << "Masukkan node pertama	: "; cin >> a;
                cout << "Masukkan node kedua 	: "; cin >> b;
                add_edge(a,b);
                cout << "Edge telah ditambahkan\n";
                system("Pause"); 
                system("cls"); 
                break;
            case 2:
                printMatrix(v);
                system("Pause"); 
                system("cls"); 
                break;
            case 3:
                return 0;
                break;
            default:
                break;
        }
    }    
}
