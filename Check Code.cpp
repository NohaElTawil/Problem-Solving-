#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    int a , b ;
    cin >> a >> b ;
    char s [a + b + 1];
    for (int i = 0 ; i < a+b+1 ; i++) {
        cin >> s[i] ;
    }
    bool flag = true ;
    if (s[a]!='-') {
        flag = false ;
    }
    for (int i = 0 ; i < a+b+1 ; i++) {
        if (i==a) {
            continue ;
        }
        if (s[i]=='-') {
            flag = false ;
            break ;
        }
    }
    if (flag) {
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
}                                                