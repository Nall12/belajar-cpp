#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nilai(3); // buat 3 slot kosong

    cin >> nilai[0];   // isi slot 0
    cin >> nilai[1];   // isi slot 1
    cin >> nilai[2];  // isi slot 2

    // sekarang mau tambah angka baru tanpa buat ulang array
    nilai.push_back(99); // slot 3 otomatis dibuat dan diisi 99
    nilai.push_back(55); // slot 4 otomatis dibuat dan diisi 55

    
    // Output: 7 2 10 99 55
}