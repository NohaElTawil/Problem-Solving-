#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string s ;
    cin >> s ;
    string w = "hello" ;
    long long p = 0 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (w[p]==s[i]) {
            p++;
        }
        if (p>4) {
            break;
        }
    }
    if (p>4) {
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }
}