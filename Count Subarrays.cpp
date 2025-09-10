#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long t ;
    cin >> t ;
    while (t--) {
        long long n ;
        cin >> n ;
        long long arr[n] ;
        for (int i = 0 ; i < n ; ++i) {
            cin >> arr[i] ;
        }
        long long ans = n ;
        for (int i = 0 ; i < n ; ++i) {
            for (int j = i+1 ; j < n ; ++j) {
                if (arr[j]>arr[j-1]) {
                    ans++;
                }
                else {
                    break;
                }
            }
        }
        cout << ans << endl ;
    }

}