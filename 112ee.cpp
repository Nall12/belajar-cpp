#include <iostream>
using namespace std;

int n;
cout << "banyak nilai yang ingin dimasukkan: ";
cin >> n;

int nilai[n];
ci
// void untuk tampilkan
void tampilkanArray(int arr[], int n){
    for(int i=0; i<n; i++){ // kalo aku ubah huruf n jadi k
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
} //[2, 1, 5, 7, 10] 1,2,5,7,10
//2,1,7,10

    
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