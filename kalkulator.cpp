#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b;

    cout << "Kalkulator Mini\n";
    cout << "masukkan angka pertama:\n";
    cin >> a;
    cout << "Masukkan angka kedua:\n";
    cin >> b;

    cout << "--- HASIL ---" << endl;
    cout << "Pertambahan: " << a + b << endl;
    cout << "Pengurangan: " << a - b << endl;
    cout << "Perkalian  : " << a * b << endl;
    cout << "Pembagian  : " << a / b << endl;
    cout << "Persenan : " << fmod(a, b) << endl;

    return 0; 


}