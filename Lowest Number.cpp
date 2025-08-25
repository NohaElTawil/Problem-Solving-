#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n ;
    cin >> n ;
    long long arr[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    long long min = 100001 ;
    long long ans = 0 , p = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i]<min) {
            min = arr[i];
            ans = min ;
            p = i+1 ;
        }
    }
    cout << ans << ' ' << p ;
}
