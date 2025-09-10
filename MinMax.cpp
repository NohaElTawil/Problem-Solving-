#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n ;
    cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int IndexMin = 0 , IndexMax = 0 ;
    int mn = INT_MAX ;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i]<mn) {
            mn = arr[i] ;
            IndexMin = i;
        }
    }
    int mx = INT_MIN ;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
            IndexMax = i ;
        }
    }
    swap(arr[IndexMin] , arr[IndexMax])  ;
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << ' ' ;
    }
}                                                    