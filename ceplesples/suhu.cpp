#include <iostream>
using namespace std;

string x;
float c, r, f, k;
int main(){
    cout << "C\t" << "R\t" << "T\t" << "K\t" << endl;
    for(int z = 1 ; z <= 100 ; z++){
        c = z;
        r = (4.0 / 5.0) * c;
        f = (9.0 / 5.0) * c + 32;
        k = c + 273.15;
        cout << c << "\t" << r << "\t" << f << "\t" << k << endl;
    }
    return 0;
}
