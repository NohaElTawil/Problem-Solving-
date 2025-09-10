#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n , m ;
    cin >> n >> m ;
    long long arr[n][m] ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> arr[i][j] ;
        }
    }
    long long x ;
    cin >> x ;
    bool flag = false ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if (arr[i][j]==x) {
                flag = true ;
                break ;
            }
        }
        if (flag) {
            break;
        }
    }
    if (flag) {
        cout << "will not take number" ;
    }
    else {
        cout << "will take number" ;
    }
}