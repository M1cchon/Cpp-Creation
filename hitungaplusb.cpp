#include <iostream>
using namespace std;
int a = 0, b = 20, c = 0;
int main(){
    cout << "A\t" << "B\t" << "C" << endl;
    while(a <= 20){
        c = a + b;
        cout << a << "\t" << b << "\t" << c << endl;
        a++;
        b--;
       
    }
}
/*
    OUTPUT
    A       B       C
    0       20      20
    1       19      20
    2       18      20
    3       17      20
    4       16      20
    5       15      20
    6       14      20
    7       13      20
    8       12      20
    9       11      20
    10      10      20
    11      9       20
    12      8       20
    13      7       20
    14      6       20
    15      5       20
    16      4       20
    17      3       20
    18      2       20
    19      1       20
    20      0       20
    
*/