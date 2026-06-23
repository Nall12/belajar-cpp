#include <iostream>

using namespace std;

int main() {
    float a, b, hasil;
    char operasi;
    cout << ".....KALKULATOR.....\n";
    cout << "masukkan angka pertama :\n";
    cin >> a;
    cout << "(mau +, -, /, * ?)\n";
    cin >> operasi;
    cout << "masukkan angka kedua :\n";
    cin >> b;

    if (operasi == '+') {
        hasil = a+b;
    }
        else if (operasi == '-') {
            hasil = a-b;
        }
        else if (operasi == '/') {
            hasil = a/b;
        }
        else if (operasi == '*') {
            hasil = a*b;
        }
        else {
            cout << "Operasi tidak dikenal!" << endl;
        return 0;
        }

        cout << hasil << endl;

        return 0;
    }
    
