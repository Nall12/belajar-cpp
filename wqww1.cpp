#include <iostream>
using namespace std;

int nilai[5] = {7, 2, 10, 1, 5};
// void untuk tampilkan
void tampilkanArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void untuk sorting
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int k=0; k<n-i-1; k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
}

    
int main(){
    cout << "Sebelum: ";
    tampilkanArray(nilai, 5);  // panggil void

    bubbleSort(nilai, 5);      // panggil void

    cout << "Sesudah: ";
    tampilkanArray(nilai, 5);  // panggil void lagi!
}
// Output:
// Sebelum: 7 2 10 1 5
// Sesudah: 1 2 5 7 10