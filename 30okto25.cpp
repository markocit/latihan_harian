#include <iostream>
using namespace std;
void swich(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

void selectionsort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int terkecil = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[terkecil]){
                terkecil = j;
            }
         }
    if (terkecil != i){
            swich(arr[i],arr[terkecil]);
        }    
    }
    
}

void menampilkan(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    selectionsort(data,n);
    menampilkan(data,n);
}