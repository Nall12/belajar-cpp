#include <iostream>
using namespace std;

int main(){
    int a = 10; //isi nilai a=10 dan alamatnya...
int* p = &a; //lihat alamat di pointer a

cout << p << endl; //nah p ini knp bukan nilai? knp malah alamatny
cout << &a; // alamat a
}