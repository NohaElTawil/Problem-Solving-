#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    string w;
    cin >> w;

    string sub(1, w[0]);

    for (int i = 1; i < n; i++) {
        if (w[i] != sub.back()) {
            sub += w[i];
        }
    }

    cout << sub.size();
}