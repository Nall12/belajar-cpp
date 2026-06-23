#include <iostream>
#include <string>

using namespace std;

int main (){
     string name;
    int umur;
    string cita;
    int kelas;

        cout << "masukkan nama kamu ";
        getline (cin, name);

        cout << "berapa umur kamu? ";
        cin >> umur;
        
        cin.ignore();

        cout << "apa cita cita kamu? ";
        getline (cin, cita);

        cout << "kamu kelas brp skrg? ";
        cin >> kelas;

        cout << "\n________INFORMASI PRIBADI_______" << endl;
       cout << name << endl;
        cout << umur << endl;
        cout << cita << endl;
        cout << kelas << endl;

        return 0;
}