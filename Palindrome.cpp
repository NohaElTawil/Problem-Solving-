#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    string w ;
    cin >> w ;
    string m = w ;
    reverse (m.begin(), m.end()) ;
    if (w==m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
