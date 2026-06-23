#include <iostream> //
using namespace std; //

void isi(int n[], int m){ //void adalah data kosong yang bisa kita isi kapan saja kan? 
    for (int i=0; i<m; i++){ //for ialah kondisi untuk menggulang, i
        cout << "mskn nilai ";
        cin >> n[i];
    }
}

void tmpilkn(int a[], int c) {
    for (int k=0; k<c; k++) {
    cout << a[k] << " ";
    }
}

int main(){
int nilai[5];
isi(nilai, 5);
tmpilkn(nilai, 5);
}