#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s.substr(i,5)=="EGYPT") {
            cout << ' ' ;
            i+=4 ;
        }
        else {
            cout << s[i] ;
        }
    }
}