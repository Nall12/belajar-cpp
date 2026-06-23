#include <iostream>
#include <string>
using namespace std;

class kendaraan {
    public:
    string merk;
    string kecepatan;
    string warna;

    kendaraan (string m, string k, string w){
        merk = m;
        kecepatan = k;
        warna = w;
    }
      void kendaraanall(){
        cout << "merk       = " << merk << endl;
        cout << "kecepatan  = " << kecepatan << endl;
        cout << "warna      = " << warna  << endl;
        cout << endl;

        }
};
        int main (){
            kendaraan mobils("sigra", "max 170 km/jam", "merah");
            kendaraan mobila("alya", "max 140 km/jam", "kuning");

            mobils.kendaraanall ();
            mobila.kendaraanall ();
        }
