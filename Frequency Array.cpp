#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n , m ;
    cin >> n >> m ;
    long long a[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
    }
    long long feq[m+1] ;
    for (int i = 0 ; i < m+1 ; i++) {
        feq[i]=0 ;
    }
    for (int i = 0 ; i < n ; i++) {
        feq[a[i]]++ ;
    }
    for (int i = 1 ; i <=m ; i++) {
        cout << feq[i] << endl ;
    }
}