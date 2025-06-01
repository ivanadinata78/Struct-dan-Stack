#include <iostream>
using namespace std;

int main(){
    struct mahasiswa{
        string nim;
        string nama;
        string alamat;
        float ipk;
    };

mahasiswa ivan;
ivan.nim="C030324123";
ivan.nama="Ivan Adinata";
ivan.alamat="JL. Sultan Adam, Komplek Mahligai RT.12 RW.003";
ivan.ipk=3.7;

system("cls");
cout << ivan.nim<<"\n";
cout << ivan.nama<<"\n";
cout << ivan.alamat<<"\n";
cout << ivan.ipk<<"\n";
}
