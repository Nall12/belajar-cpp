#include <iostream>

using namespace std;
int main (){
    int angka [5] = {1,2,3,4,5}; // array berisi data 0-4
    for (int i=0 ; i<5 ; i++) { //ketika i=0true maka cout data 0 yaitu 1, dan seterusnya sampai pengulangan false
        cout << angka[i] << " ";
    }
    return 0;
}