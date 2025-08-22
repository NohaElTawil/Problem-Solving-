#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n-i ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}