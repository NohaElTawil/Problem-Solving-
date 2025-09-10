#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string w;
        cin >> w;

        if (w == "pop_back") {
            if (!s.empty()) s.pop_back();
        }
        else if (w == "front") {
            if (!s.empty()) cout << s.front() << endl;
        }
        else if (w == "back") {
            if (!s.empty()) cout << s.back() << endl;
        }
        else if (w == "sort") {
            long long l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r) swap(l, r);
            sort(s.begin() + l, s.begin() + r + 1);
        }
        else if (w == "reverse") {
            long long l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r) swap(l, r);
            reverse(s.begin() + l, s.begin() + r + 1);
        }
        else if (w == "print") {
            long long pos;
            cin >> pos;
            pos--;
            if (pos >= 0 && pos < s.size())
                cout << s[pos] << endl;
            else
                cout << "Invalid position" << endl;
        }
        else if (w == "substr") {
            long long l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r) swap(l, r);
            cout << s.substr(l, r - l + 1) << endl;
        }
        else {
            char x;
            cin >> x;
            s.push_back(x); // push_back command
        }
    }

    return 0;
}
