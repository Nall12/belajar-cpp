#include <iostream>
using namespace std;

int main(){

        int n;
        cout << "mau berapa data yg disimpan? ";
        cin >> n;

        int* array = new int[n];
        for (int i=0; i<n; i++){
            cout << "masukkan angka ke " << i+1 << " = ";
            cin >> array [i];
        }

        for (int i=0; i<n; i++){
            for (int k=0; k<n-i-1; k++){
                if(array [k]> array[k+1]){
                    int temp= array [k];
                    array [k]=array [k+1];
                    array [k+1] = temp;
                }
            }
            
            
        }
        for (int q=0; q<n; q++){
                cout << array [q];
            }
        delete []array;
}