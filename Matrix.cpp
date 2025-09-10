#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n ;
    cin >> n ;
    long long arr[n][n];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cin >> arr[i][j] ;
        }
    }
    long long s1 = 0 , s2 = 0 ;
    long long row1 = 0 , column1 = 0 ;
    for (int i = 0 ; i < n ; i++) {
        s1+=arr[row1][column1] ;
        row1++ ;
        column1 ++ ;
    }
    long long row2 = 0 , column2 = n-1 ;
    for (int i = 0 ; i < n ; i++) {
        s2+=arr[row2][column2] ;
        row2++ ;
        column2 -- ;
    }
    cout << abs(s1-s2) ;
}