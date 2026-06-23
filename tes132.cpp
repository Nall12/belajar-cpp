#include <iostream>
using namespace std;

int main() {
    for (int i=1; i<=5; i++) { // loop 1i=1 true msk ke loop dlm,
        //run i=2 true 
        
        for (int q=1; q<=5-i; q++) { //q=1 kondisi true, cout spasi, ulg lgi q=2 true cout spasi ulg lgi smpai q=4,lalu berakhir di q=5 lnjt ke for bawah.
        // q=2 true, kondisi bkl true smpai q=3 lalu lnjt ke for bwh
            cout << " ";
    } 

        for (int z=1; z<=2*i-1; z++) { // z=1 kondisi tru, cout bintang, z=2 false, enter baris baru, lnjt ke for awal
            //z=2 true lnjt smopai z=3
        cout << "*";

    }
    cout << endl;
}
}