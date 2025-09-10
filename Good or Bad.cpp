#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    long long t ;
    cin >> t ;
    while (t--) {
        string s ;
        cin >> s ;
        bool flag = false ;
        for (int i = 0 ; i < s.size() ; i++) {
            if (s.substr(i,3)=="010" || s.substr(i,3)=="101") {
                flag = true ;
                break;
            }
        }
        if (flag) {
            cout << "Good" << endl;
        }
        else {
            cout << "Bad" << endl;
        }
    }
}