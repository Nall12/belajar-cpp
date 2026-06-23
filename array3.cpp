#include <iostream>

using namespace std;
int main(){
    int nilai[5]= {1,3,5,7,9}; // membuat 5 indeks array
    int terbesar = nilai[0]; //int terbesar untuk adalh indeks 0

    for(int i=0; i<5; i++) { // i=o true msk ke if, menggulang smpai i=4, klo i=5 false

        if (nilai[i] > terbesar) { //nilai i pertama adalah 0 yaitu 1 dan tersimpan di data terbesar adalh indeks 0, lnjt for i=1 nyimapn terbesarnya dalh 3, lnjt lgi smpai indeks ke5 atau 9, jdi nilai terbesasr adalh indeks terakhir tyaitu indeks 4
            terbesar = nilai[i];
            }

    }
    cout << "nilai terbesar adalah: " << terbesar;
    return 0;
}