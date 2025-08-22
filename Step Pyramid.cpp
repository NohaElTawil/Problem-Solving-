#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n ;
    cin >> n ;
    long long space = n-1 , star = 1 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < space ; j++ ) {
            cout << ' ' ;
        }
        for (int j = 0 ; j < star ; j++) {
            cout << "*" ;
        }
        cout << endl;
        space--;
        star+=2 ;
    }
}