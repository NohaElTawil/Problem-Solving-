#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    string s ;
    cin >> s ;
    for (char i = 'a' ; i <= 'z' ; i++) {
        long long c = count (s.begin() , s.end() , i) ;
        if (c!=0) {
            cout << i << " : " << c << endl;
        }
    }
}