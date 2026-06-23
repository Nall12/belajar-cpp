#include <iostream>
using namespace std;

int nilai [5] = {2,3,1,5,4};
int n = 5; 

int main (){

    for (int i=0; i<n; i++){
        for (int k=0; k<n-i; k++){
            if (nilai[k]< nilai[k+1]){
                int temp=0;
                temp=nilai[k];

            }
            
        }
    }    
    
    for (int i=0; i<n; i++)  {
        cout << nilai[i] << " ";
    }
}