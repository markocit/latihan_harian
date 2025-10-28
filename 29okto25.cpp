#include <iostream>
using namespace std;
struct konser{
    string kota;
    double kapasitas, pengunjung;
};

int main(){
    int n;
    cin >> n;
    konser musik[n];
    double persentase[n];
    for (int i = 0; i < n; i++)
    {
        cin >> musik[i].kota;
        cin >> musik[i].pengunjung;
        cin >> musik[i].kapasitas;
        persentase[i] = 100*musik[i].pengunjung/musik[i].kapasitas;
    }
    
    for (int i = 0; i < n -1; i++)
    {
       for (int j = 0; j < n - i - 1; j++)
       {
        if (persentase[j] < persentase [j + 1]){
            double mengurut = persentase [j];
            persentase [j] = persentase [j+1];
            persentase [j+1] = mengurut;

            konser tempMusik = musik[j];
                musik[j] = musik[j + 1];
                musik[j + 1] = tempMusik;
            
        }
       }
       
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int i = 0; i < n; i++)
    {
        cout << persentase[i] << " ";
        cout << musik[i].kota << endl;
    }
    
}