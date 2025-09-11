#include<iostream>
#include <algorithm>
using namespace  std ;
int main () {
    long long a , b ;
    cin >> a >> b ;
    long long maximum = max (a,b) ;
    long long g = 0 ;
    for (int i = 1 ; i <= maximum ; i++) {
        if (a%i==0 && b%i==0) {
            g=i ;
        }
    }
    cout << g ;
}