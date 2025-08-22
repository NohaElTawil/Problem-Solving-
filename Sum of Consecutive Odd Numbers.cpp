#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long t ;
    cin >> t ;
    while (t--) {
        long long x , y ;
        cin >> x >> y ;
        long long max = 0 , min = 0 ;
        if (x>y) {
            max = x ;
            min = y ;
        }
        else {
            max = y ;
            min = x ;
        }
        long long sum = 0 ;
        for (int i = min+1 ; i < max ; i++) {
            if (i%2!=0) {
                sum+=i ;
            }
        }
        cout << sum << endl;
    }
}