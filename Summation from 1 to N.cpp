#include<iostream>
using namespace  std ;
int main () {
    long long N;
    cin >> N;

    // Using the formula: N * (N + 1) / 2
    long long sum = N * (N + 1) / 2;

    cout << sum << endl;

    return 0;
}