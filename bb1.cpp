#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        
        int indeksTerkecil = i; // anggap posisi i adalah terkecil dulu
        
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[indeksTerkecil]){
                indeksTerkecil = j; // update kalau ketemu yang lebih kecil
            }
        }
        
        // tukar posisi i dengan posisi terkecil yang ditemukan
        int temp = arr[i];
        arr[i] = arr[indeksTerkecil];
        arr[indeksTerkecil] = temp;
    }
}