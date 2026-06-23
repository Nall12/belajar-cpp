#include <iostream>
using namespace std;

int main () {
int n;
cin >> n;

    for (int i = 1; i <= n; i++) {

    if (i % 3 == 0 && i % 5 == 0) {
    cout << "fizzbut";
    }
        else if ( i % 3 == 0) {
        cout << "fizz";
     }
         else if ( i % 5 == 0) {
        cout << "but";
         }
             else { 
                cout << i;
            }
    
     cout << endl;
    
    }
     

return 0;

}