#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    string x , y ;
    cin >> x >> y ;
    int mx = max ( x.size() , y.size() ) ;
    for (int i = 0 ; i < mx ; i++) {
        if (x[i]>y[i]) {
            cout << y ;
            break;
        }
        else if (y[i]>x[i]) {
            cout << x ;
            break;
        }
    }
    if (x==y) {
        cout << x;
    }
}