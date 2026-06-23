#include <iostream>
using namespace std;

int main(){
    int nilai[5] = {7, 2, 10, 1, 5};
    int n = 5;

    // Bubble Sort
    for(int i = 0; i < n-1; i++){        // putaran
        for(int j = 0; j < n-1-i; j++){  // bandingkan per pasang
            if(nilai[j] > nilai[j+1]){    // kalau urutannya salah
                // tukar!
                int temp    = nilai[j]; //7=int temp
                nilai[j]    = nilai[j+1]; //2=indeks0
                nilai[j+1]  = temp; //indeks1= temp/7
            }
        }
    }

    // Tampilkan hasil
    for(int i = 0; i < n; i++){
        cout << nilai[i] << " ";
    }
    // Output: 1 2 5 7 10
}