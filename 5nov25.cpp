#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string n;
    ifstream baca;
    baca.open("baca.txt");
    if (baca.fail())
    {
        cout << "tidak bisa buka file";
    }else {
        cout << "baca file disini";
    }
    
    
}