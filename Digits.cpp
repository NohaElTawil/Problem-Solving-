#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long t ;
    cin >> t ;
    while (t--) {
        long long n ;
        cin >> n ;
        while (n!=0) {
            long long last = n%10 ;
            n/=10 ;
            cout << last << ' ' ;
        }
        cout << endl;
    }
}