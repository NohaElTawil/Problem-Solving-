#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n ;
    cin >> n ;
    long long arr[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    long long op = 0 ;
    while (true) {
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            op++;
            for (int i = 0; i < n; i++) {
                arr[i] /= 2;
            }
        }
        else {
            break;
        }
    }
    cout << op ;
}
