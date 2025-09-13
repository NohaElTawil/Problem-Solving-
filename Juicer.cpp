#include <iostream>
using namespace std;

int main() {
    long long n, b, d;
    cin >> n >> b >> d;

    long long arr[100005];
    long long waste = 0;
    int emptyCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= b) {
            waste += arr[i];
            if (waste > d) {
                emptyCount++;
                waste = 0;
            }
        }
    }

    cout << emptyCount << endl;

    return 0;
}




