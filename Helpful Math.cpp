#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;


    char digits[51];
    int count = 0;


    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '+') {
            digits[count++] = s[i];
        }
    }


    sort(digits, digits + count);


    for (int i = 0; i < count; ++i) {
        cout << digits[i];
        if (i != count - 1) {
            cout << "+";
        }
    }

    cout << endl;
    return 0;
}



