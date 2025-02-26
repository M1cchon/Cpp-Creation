#include <iostream>
using namespace std;

string x;
int batas;
float c, r, f, k;
int main(){
    cout << "Banyak suhu celsius yang mau dikonversi : ";
    cin >> batas;
    cout << endl;
    cout << "C\t" << "R\t" << "T\t" << "K\t" << endl;
    for(int z = 1 ; z <= batas ; z++){
        c = z;
        r = (4.0 / 5.0) * c;
        f = (9.0 / 5.0) * c + 32;
        k = c + 273.15;
        cout << c << "\t" << r << "\t" << f << "\t" << k << endl;
    }
    return 0;
}
/*
    Banyak suhu celsius yang mau dikonversi : 10
    OUTPUT
    C       R       T       K
    1       0.8     33.8    274.15
    2       1.6     35.6    275.15
    3       2.4     37.4    276.15
    4       3.2     39.2    277.15
    5       4       41      278.15
    6       4.8     42.8    279.15
    7       5.6     44.6    280.15
    8       6.4     46.4    281.15
    9       7.2     48.2    282.15
    10      8       50      283.15
    
*/
