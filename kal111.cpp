#include <iostream>
#include <cmath>
using namespace std;

    int main () {
        int a1, a2, h;
        char op;

        cin >> a1;
        cout << "operasi apa?";
        cin >> op;
        cin >> a2;

        if (op == '+') {
        h= a1+a2;
        }
            else if (op == '-') {
                h = a1-a2;
            }
            else if (op == '%') {
                h = a1 % a2;
            }
            else if (op == '*') {
                h = a1 * a2;
            }

         cout << h << endl;
            return 0;
    }