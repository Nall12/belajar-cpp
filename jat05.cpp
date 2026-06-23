#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int asli = n;
    int balik = 0;

    while (n > 0){
        int digit = n%10;
        balik = balik*10+digit;
        n = n/10;
    }
        if (balik == asli) {
            cout << "palinrome";
        }
            else {
                cout << "bukan";
            }
    


    return 0;
}