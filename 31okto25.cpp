#include <iostream>
using namespace std;

int BalikAngka (int n) {
    int hasil = 0;
    while (n > 0) {
        hasil = hasil * 10 + (n % 10);
        n /= 10;
    }
    return hasil;
}

int main() {
    int x, y;
    cin >> x >> y;
    

    int balik_x = BalikAngka(x);
    int balik_y = BalikAngka(y);

    int jumlah = balik_x + balik_y;

    int balik_z = BalikAngka(jumlah);
    cout << balik_z;

    return 0;
}