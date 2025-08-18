#include<iostream>
using namespace  std ;
int main () {
    int a , b , c ;
    cin >> a >> b >> c ;
    if (a <= b && a <= c) {
        if (b <= c) {
            cout << a << endl << b << endl << c << endl;
        }
        else {
            cout << endl << a << endl << c << endl  << b << endl;
        }
        }
    else if (b <= c && b <= a) {
        if (c <= a) {
            cout << b << endl << c << endl << a << endl;
        }
        else {
            cout << endl << b << endl << a << endl  << c << endl;
        }
    }
    else if (c <= a && c <= b) {
        if (a <= b) {
            cout << c << endl << a << endl << b << endl;
        }
        else {
            cout << endl << c << endl << b << endl  << a << endl;
        }
    }
    cout << endl << a << endl << b << endl << c << endl;
}