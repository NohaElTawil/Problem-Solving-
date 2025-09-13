#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long home[30], guest[30];

    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    long long counter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home[i] == guest[j]) {
                counter++;
            }
        }
    }

    cout << counter << endl;
    return 0;
}





