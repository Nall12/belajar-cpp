#include <iostream>
using namespace std;

int main () {

    for (int i = 5; i >= 1; i--) { // i=5 kondisi true msk ke loop dlm
                                    //karena i dikurang mka skrg i=4 kondisi true lnjrt deh ke lopp dlm.
        

        for (int j = 1; j <= i; j++) { // j=1 true, simpan i\5, loop dlm lgi j=2 true simpan 5 lgi jdi 55, lnjt loop dlm lgi j=3 true simpan 5 jdi 555, 
                                        // ulg terus smpe j=6 mka kondisi false cout enter atau baris ke bwh jdi baris 1 isinya 55555 lnjt ke loop luar
                                        //
            cout << i;
            
        }

        cout << endl;
    }

    return 0;
}
