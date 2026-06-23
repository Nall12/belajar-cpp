#include <iostream>
#include <vector>
using namespace std;


int tambah(int x, int y){ // int tmbh dmn kita input sendiri nnti nilai x dan y sendiri, lalu otomatis akan kluaar hsl x+y
    return x + y;
}

int kali(int x, int y){
    return x * y;
}

int kurang(int x, int y){
    return x - y;
}

float bagi(int x, int y){
    return x / y;
}

int main(){
    int x, y;
    char op;
    cin >> x;  // user input 
    cin >> op;
    cin >> y;  // user input

    if (op == '+') {  // kirim input user ke function
    cout << tambah (x, y);
    }
    else if  (op == '-') {  // kirim input user ke function
    cout << kurang (x, y);
    }
    else if (op == '*') {  // kirim input user ke function
     cout << kali (x, y);
    }
    else if (op == '/') {  // kirim input user ke function
     cout << bagi (x, y);
    }
}