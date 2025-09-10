#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n , m ;
    cin >> n >> m ;
    long long a[n] , b[m] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
    }
    for (int i = 0 ; i < m ; i++) {
        cin >> b[i] ;
    }
    int index = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (a[i]==b[index]) {
            index++;
        }
    }
    if (index>=m) {
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }
}