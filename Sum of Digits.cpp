#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    int n ;
    cin >> n ;
    char arr[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    long long ans = 0 ;
    for (int i = 0 ; i < n ; i++) {
        ans+=arr[i] - '0' ;
    }
    cout << ans ;
}                                                               