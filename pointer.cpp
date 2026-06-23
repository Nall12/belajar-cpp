#include <iostream>
using namespace std;

int main (){
int a = 20;
int b = 75;
int c=6;
int* p = &a; //pointer lihat ke alamat a

*p = c; // ubh almt pointer mnjdi c
p = &b; //gnti mnjdi pointer melihat ke arh b


cout << *p; // cout nilai yg ad di p, artinya yg msh kesimpan kan nilai 20 tdi kan tdi yg diubh cuma alamatnta doang bkn nilai, pertanyaan klo jawabnnya 75 apkh pas perpindhn tdi alamat p dri a mnjdi b, apkh nilainya jg ikut pindh?

}