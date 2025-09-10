#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m = *min_element(arr, arr + n);
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == m) {
            c++;
        }
    }
    if (c % 2 == 0) {
        cout << "Unlucky" << endl;
    } else {
        cout << "Lucky" << endl;
    }
}                      