#include <iostream>
using namespace std;//4,31,65,6,2 (awal)// putaran i=(0)j=1, terjadi true pda saat j=4<i hasil= 2,31,65,6,4 //i=1 j=2 2,4,65.6,31// i=2 j=3 2,4,6,65,31                                                                                                                                                                                                                                                                          nah dis9ini itu aku bingung apakah j msh berjalanan atau pindah ke loop luar atau ulg lgi di loop dalam?// i=2, j=3  2,6,31,65,4//i=3 j=4  2,4,6,31,65

void sec(int array[], int n){ //awal void, fungsi void disini untuk kita sediakan data kosong yg bisa kpn sj diisi oleh user nntinya
    for(int i=0; i<n-1; i++){        // lop luar untuk menyimpan dta nnti yg terkecil di taruh di i dulu, dan juga untuk penggulangan setiap array dri 0-4
        
        int indeksTerkecil = i;       // simpan POSISI indeks 0 dlu biar enak mulainya dri kanan ke kiri
        
        for(int j=i+1; j<n; j++){ // j dimulai dri 1  Karena posisi i/0 sudah dianggap terkecil! Tidak perlu bandingkan i dengan dirinya sendiri.//loop dalam untuk pengecekan dan perbangingan angka dikiri dan dikanan apkh angka dikiri < angka kanan jika ya indeksterkecil yg diisi oleh i tdi diubh oleh j, nmun sy msh bingung.
            if(array[j] < array[indeksTerkecil]){ // sy bingung disini kenapa loop dalam dimulai dri 1, bukan nya dri 0.
                indeksTerkecil = j; // 
            }
        }    /2,6,65,31,4
        
        // tukar — lengkapi sendiri!
        int temp = array [i]; //knp hrs tulis array dlu bru[i], karena klo hnya i brrti indeks ke brpnya tpi klo pke array itu angka ke indeks ... contoh klo kita sebut array[i(2)] yg muncul angka dindeks ke 2 tersebut tpi klo hnya i kita hnya memanggil indeks tersebut tnpa menggeluarkn angka di indeks tersebut
        array[i] = array [indeksTerkecil]; //knp jg ini hrs tulis array indeksterkecill dan knp [incdeksterkecil] hrs di dlm kurung
        array[indeksTerkecil] = temp;
    }
}

int main (){
    int nilai[5] = {4,31,65,6,2};
    sec (nilai, 5); // knp angka 5 tdk pke []? karena ini memnggil bukan mengisi!

    for (int i=0; i<5; i++) {
        cout << nilai [i] << " ";
    }
    
}