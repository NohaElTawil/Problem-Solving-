#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string s ;
    cin >> s ;
    long long ce = 0 , cg = 0 , cy = 0 , cp = 0 , ct = 0 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i]=='e'|| s[i]=='E') {
            ce++ ;
        }
        else if (s[i]=='g'|| s[i]=='G') {
            cg++ ;
        }
        else if (s[i]=='y'|| s[i]=='Y') {
            cy++ ;
        }
        else if (s[i]=='p'|| s[i]=='P') {
            cp++ ;
        }
        else if (s[i]=='t'|| s[i]=='T') {
            ct++ ;
        }
    }
    cout << min({ce , cg , cy , cp , ct}) ;
}