#include <iostream>
using namespace std;

int main(){
    int n; //
    cin >> n; // n disini berfungsi untuk menentukan jumlah array yg akan kita buat nnti, yaitu dri programer atau pengguna

    int* array = new int [n]; //int pointer, memasukkan fungsi new untuk menyimpan nilai array nntinya
    for(int i=0; i<n; i++){ // penggulan dimulai dri 0
        cout << "angka di array ke- " <<i << "= "; //print array angka sesuai dengan nilai i pada saat itu jg .... dan mskn sendiri nilai yg pengguna mau.
        cin >> array [i];
    }
    
    for(int j=0; j<n; j++){
        cout << j << " ";
    }

    delete[] array;
}