#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long a , b ;
    cin >> a >> b ;
    long long c = 0 ;
    for (int i = a ; i <= b ; i++) {
        long long ii = i ;
        bool f = true ;
        while (ii!=0) {
            long long last = ii%10 ;
            if (last!=4 && last!=7) {
                f = false ;
                break;
            }
            ii/=10;
        }
        if (f) {
            c++ ;
            cout << i << ' ';
        }
    }
    if (c==0) {
        cout << "-1" << endl;
    }
}