#include <iostream>
using namespace std;

struct surat{
    string pengirim, penerima;
    int no_telp;
};
int main(){
    surat pengguna;
    getline(cin, pengguna.penerima);
    getline(cin, pengguna.pengirim);
    cin >> pengguna.no_telp;
    cout << endl;

    cout <<"Nama Penerima Surat : " << pengguna.penerima << endl;
    cout <<"Nama Pengirim Surat : " << pengguna.pengirim << endl;
    cout <<"Nomor Telepon Penerima Surat : " << pengguna.no_telp << endl;
}