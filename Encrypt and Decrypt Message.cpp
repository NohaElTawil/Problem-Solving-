#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    int q;
    cin >> q;
    string s;
    cin >> s;

    string k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    char f1[150] = {};  // decode map: encoded char → original
    char f2[150] = {};  // encode map: original char → encoded

    for (int i = 0; i < o.size(); i++) {
        f1[k[i]] = o[i];
        f2[o[i]] = k[i];
    }

    for (int i = 0; i < s.size(); i++) {
        if (q == 1) {
            cout << f2[s[i]];  // encode
        } else {
            cout << f1[s[i]];  // decode
        }
    }

    cout << endl;
    return 0;
}