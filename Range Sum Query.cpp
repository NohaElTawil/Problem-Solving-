#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    long long size , range ;
    cin >> size >> range ;
    long long arr[size] ;
    long long arr2[size] ;
    for (int i = 0 ; i < size ; i++) {
        cin >> arr[i] ;
        if (i==0) {
            arr2[i] = arr[i] ;
        }
        else {
            arr2[i] = arr[i] + arr2[i-1] ;
        }
    }
    while (range--) {
        long long start , end ;
        cin >> start >> end ;
        start--;
        end --;
        long long sum = arr2[end] - arr2[start] + arr[start] ;
        cout << sum << endl ;
    }
}
