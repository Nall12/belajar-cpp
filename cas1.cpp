#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int jumlah = 0;
    
bool pertama = true;
bool ketiga = true;

while (i <= n) {
    if (i % 2 == 1) {
        if (!pertama ; !ketiga) {
            cout << "+";
        }
        cout << i;
        jumlah += i;
        pertama = false;
        ketiga = false;
    }
    i++;
    }
    cout << "=" << jumlah;
return 0;
}