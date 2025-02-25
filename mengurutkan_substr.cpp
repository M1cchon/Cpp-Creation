#include <iostream>
using namespace std;

string kata;
int main() {
    cout << "kata : ";
    cin >> kata;
    cout << endl;
    for (int i = 0; i < kata.length(); i++) {
        cout << kata.substr(i) << endl;
    }
    return 0;
}