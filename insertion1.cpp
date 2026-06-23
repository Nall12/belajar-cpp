#include <iostream>
using namespace std;

void derstring(int array[], int n){ //memangil fungsi void yg dpt dipanggil kpn sj
    for (int i=1; i<n; i++){ //penggulan loop yg dimulai indeks 1. knp 1 bkn 0? karena agar dia tidak memandingkan dengan nilainya sendiri saat program ini dimulai
        int terkunci = array [i]; // simpan indeks i saat ini di int  terkunci 
        int j=i-1; //sv j selalu dibwh 1 nilai i

        while (j>= 0 && array [j]>terkunci){ // ketika kedua kondisi ini benar mka msk ke program bwh
        array[j+1] = array[j]; //array j+1 saat ini kita simpan ke array j sebelumnya
        j--;  //lalu indeks j kita kurangi
        }
                array[j+1] = terkunci; //setelah penggulangan selesai simpannilai j+1 ke terkunci
    }

    
    }
//i=1,indeks 1(2)=terkunci. ketika j(indeks0) >=0 dan indeks0(j=8)>2 true. pindhkn indeks 1(2) ke indeks 0(8) lalu kurangi nilai j=-1


int main(){
    int array[5] = {8,2,9,3,7};
    derstring (array, 5);
    
    for (int i=0; i<5; i++){
        cout <<array [i] << " ";
    }
}