#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        long long arr[n] ;
        for (int i = 0 ; i < n ; i++) {
            cin >> arr[i] ;
        }
        long long ans = 1e9 ;
        for (int i = 0 ; i < n ; i++) {
            for (int j = i+1 ; j < n ; j++) {
                ans = min(ans,arr[i]+arr[j]+(j+1)-(i+1)) ;
            }
        }
        cout << ans << endl;
    }
}