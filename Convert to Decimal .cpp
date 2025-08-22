#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long t ;
    cin >> t ;
    while (t--) {
        long long n ;
        cin >> n ;
        long long counter = 0 ;
        while (n!=0) {
            if (n%2!=0) {
                counter ++ ;
            }
            n/=2 ;
        }
        long long ans = 0 , power = 1 ;
        for (int i = 0 ; i < counter ; i++) {
          ans+=power ;
          power*=2 ;
        }
        cout << ans << endl;
    }
}