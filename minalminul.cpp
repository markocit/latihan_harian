#include <iostream>
using namespace std;
int main(){
    int x = 2;
    int *dur = &x;
    cout << x << endl;
    cout << &x << endl;
    cout << *dur << endl;
    cout << dur << endl;
}