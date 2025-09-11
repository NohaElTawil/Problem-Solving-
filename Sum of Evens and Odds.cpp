#include <iostream>
using namespace std;

long long even_sum(long long x) {
    long long n = x / 2;
    return n * (n + 1);
}

long long odd_sum(long long x) {
    long long n = (x + 1) / 2;
    return n * n;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long l, r;
        cin >> l >> r;

        long long even = even_sum(r) - even_sum(l - 1);
        long long odd = odd_sum(r) - odd_sum(l - 1);

        cout << even << ' ' << odd << endl;
    }
    return 0;
}
