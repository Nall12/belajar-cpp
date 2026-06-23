#include <iostream>


using namespace std;

int main(){

    int nilai [5] = {7, 2, 10, 1, 5}; // menyimpan indeks 0-4
    int nilai1 [5] = {1,3,9,11,8};
    int cari1, cari2; //untuk menginput angka dri user yg mau dicari
    bool ketemu1 = false; //untuk mencari fakta apakah ketemu1 benar atau salah dalam codingan nnti
    bool ketemu2 =false;
    int indeks1 = -1; //untuk menyimpan nilai i nnti dalam for, dan agar bisa tersimpan nnti diluar for
    int indeks2 = -1;

   cout << "a1= ";
    cin >> cari1;
    cout << "a2= ";
    cin >> cari2;


    for(int i=0; i<5; i++){ // penggulang secara terus menerus hingga i =5 bru false. ini berguna untuk mencari apakh angka yg diinput user ad di dlm indeks yg tersimpan


        if(nilai[i] == cari1 ; nilai1[i] == cari1){//jika kondisi disini benar maka dia akan lnjt di proses di baris 35, jika slh akan menggulang smpai tdk memenuhi dan
            ketemu1 = true; // apabila tdk ad kondisi yg cocok mka nnti dia akan ke baris 39
            indeks1= i;
        }

        if(nilai[i] == cari2 ; nilai1[i] == cari2){
            ketemu2 = true;
            indeks2 = i;
        }
    }
    
        if (ketemu1 == true) { //jika ada maka tampilkan, jika tdk lanjut ke if bawah yaitu yidak ditmukan
            cout << cari1 << " ditemukan di indeks " << indeks1 << endl;
        }

        else {
            cout << cari1 << " tidak ditemukan " << endl;

        }


        if (ketemu2 == true) {
            cout << cari2 << " ditemukan di indeks " << indeks2  << endl;
        }
        else {
             cout << cari2 << " tidak ditemukan " << endl;
        }
    

    
    return 0;
    
}