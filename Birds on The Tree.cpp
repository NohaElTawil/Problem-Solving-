#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[105]; // array to hold bird counts, max n is 100

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        x = x - 1; // convert to 0-based index

        if (x > 0) {
            a[x - 1] += y - 1; // birds to the left jump up
        }
        if (x < n - 1) {
            a[x + 1] += a[x] - y; // birds to the right jump down
        }

        a[x] = 0; // all birds on this wire fly away or are shot
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}




