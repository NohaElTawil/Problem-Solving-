#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    int t ;
    cin >> t ;
    while (t--) {
        string a , b ;
        cin >> a >> b ;
        long long p1=0 , p2=0 ;
        while (p1<a.size() || p2<b.size()) {
            if (p1<a.size()&&p2<b.size()) {
                cout << a[p1] << b[p2] ;
                p1++;
                p2++;
            }
            else {
                if (p1<a.size()) {
                    cout << a[p1] ;
                    p1++;
                }
                else {
                    cout << b[p2] ;
                    p2++ ;
                }
            }
        }
        cout << endl;
    }
}