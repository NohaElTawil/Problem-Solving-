#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    long long iceCream = x;
    int distressed = 0;

    for (int i = 0; i < n; ++i) {
        char op;
        long long d;
        cin >> op >> d;

        if (op == '+') {
            iceCream += d;
        } else if (op == '-') {
            if (iceCream >= d) {
                iceCream -= d;
            } else {
                distressed++;
            }
        }
    }

    cout << iceCream << " " << distressed << endl;

    return 0;
}




