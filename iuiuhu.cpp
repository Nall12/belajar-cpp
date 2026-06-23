#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nilai(3); // buat 3 slot kosong
    int save;
    int terbesar = 0;

    nilai[0] = 7;   // isi slot 0
    nilai[1] = 2;   // isi slot 1
    nilai[2] = 10;  // isi slot 2

    // sekarang mau tambah angka baru tanpa buat ulang array
    nilai.push_back(99); // slot 3 otomatis dibuat dan diisi 99
    nilai.push_back(55); // slot 4 otomatis dibuat dan diisi 55

    for(int i = 0; i < nilai.size(); i++){
        cout << nilai[i] << " ";
    }
    // Output: 7 2 10 99 55

    for (int i=0; i<nilai.size(); i++){
        if (nilai[i] > terbesar){
            save = terbesar;
        }

    }
    cout << save;
    return 0;
}