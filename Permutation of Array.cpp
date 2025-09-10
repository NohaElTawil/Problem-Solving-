#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n ;
    cin >> n ;
    long long a[n] , b[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
    }
    for (int i = 0 ; i < n ; i++) {
        cin >> b[i] ;
    }
    sort(a,a+n) ;
    sort(b,b+n) ;
    bool flag = true ;
    for (int i = 0 ; i < n ; i++) {
        if (a[i] != b[i]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}