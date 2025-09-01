#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int even, odd;
    cin >> even >> odd;

    if (abs(even - odd) <= 1 && (even + odd) >= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}