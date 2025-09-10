#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
string s ;
cin >> s ;
string arr[505];
long long p=0 , cl=0 , cr = 0 ;
string cur = " " ;
for (int i = 0 ; i < s.size() ; i++) {
    cur+=s[i] ;
    if (s[i]=='L') {
        cl++;
    }
    else {
        cr++;
    }
    if (cl==cr) {
        arr[p] = cur ;
        p++ ;
        cl = 0 , cr = 0 ;
        cur = " " ;
    }
}
    cout << p << endl ;
    for (int i = 0 ; i < p ; i++) {
        cout << arr[i] << endl;
    }
}