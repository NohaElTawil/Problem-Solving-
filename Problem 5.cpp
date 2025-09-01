#include<iostream>
using namespace  std ;
int main () {
    long long n;
    cin >> n;

    long long bills = 0;
    int arr [5] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; ++i) {
        bills += n / arr[i];
        n %= arr[i];
    }

    cout << bills << endl;

    return 0;
}