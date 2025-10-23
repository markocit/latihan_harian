#include <iostream>
using namespace std;
struct buku{
        string judul, penulis;
        int tahunterbit, jumlahhalaman;
    };

    int main(){
    int n;
    cin>>n;
    cin.ignore();
    buku Buku[n];
    for (int i = 0; i < n; i++){
        cout << "buku ke "<< i+1 << endl;
        cout <<"judul buku "<<i+1<< " : ";
        getline(cin, Buku[i].judul);
        
        cout<<"jumlah halaman "<<i+1<< " : ";
        cin>> Buku[i].jumlahhalaman;
        cin.ignore();

        cout<<"penulis "<<i+1<< " : ";
        getline(cin, Buku[i].penulis);
        
        cout<<"tahun terbit "<<i+1<< " : ";
        cin>> Buku[i].tahunterbit;
        cin.ignore();
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << Buku[i].judul << endl;
        cout << Buku[i].jumlahhalaman << endl;
        cout << Buku[i].penulis << endl;
        cout << Buku[i].tahunterbit << endl;
        cout << endl;
    }
    
}