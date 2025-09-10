#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string s ;
    cin >> s ;
    string mn = s ;
    for (int i = 0 ; i < s.size()-1 ; i++) {
        string w1 = s.substr(0,i+1) ;
        string w2 = s.substr(i+1) ;
        sort(w1.begin(),w1.end()) ;
        sort(w2.begin(),w2.end()) ;
        string z = w1 + w2 ;
        mn = min(mn,z) ;
    }
    cout << mn ;
}