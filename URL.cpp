#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string s ;
    cin >> s ;
    s+='&' ;
    long long p1 = 0 , p2 = 0 , pa = 0 ;
    string arr[5] ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i]=='=') {
            p1=i+1;
        }
        else if (s[i]=='&') {
            p2=i-1;
            arr[pa] = s.substr(p1, p2-p1+1) ;
            pa++ ;
        }
    }
    string w[5] = {"username: " , "pwd: " , "profile: " , "role: " , "key: "} ;
    for (int i = 0 ; i < 5 ; i++) {
        cout << w[i] << arr[i] << endl;
    }
}