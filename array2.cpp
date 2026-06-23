#include <iostream>
using namespace std;

int main () {
    int nilai [5]; //kita membuat 5 indeks array (0-4)
    

    for (int i=0; i<=4; i++) { // i=0 true sampai i=4, i=5 false
            cout << "masukkan nilai: "; //mskn nilai array 0-4
    cin >> nilai [i]; //mskn nilai indeks ke 0 lalu ulg sampai indeks ke 4
    }
    

    cout << "susunan nilai dari 1-5:" << endl; //cout HASIL + ENDL AGAR HSLNYA NNTI DIBAWAH SEMUA

    for (int j=0; j<=4; j++) { // kondisi j=0 true terus smpai j=4, false ketika j=5
     cout << nilai[j] << endl; // print nillai indeks j=0 dan seterusnya smpai pengulangan ke 5
        
    }

 return 0;
}