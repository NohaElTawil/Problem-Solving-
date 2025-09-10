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
    for (int i = 0 ; i < n ; i++) {
        reverse(arr[i],arr[i]+m) ;
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << arr[i][j] << ' ' ;
        }
        cout << endl ;
    }
}