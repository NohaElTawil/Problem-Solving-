#include<iostream>
using namespace  std ;
int main () {
    long long q ;
    cin >> q ;
    while (q--) {
        long long n ;
        cin >> n ;
        long long f = 1 ;
        for (int i = 2 ; i <= n ; i++) {
        f*=i ;
        }
        cout << f << endl;
    }
}
