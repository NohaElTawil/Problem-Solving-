#include<iostream>
using namespace  std ;
int main () {
    int n , even = 0 , odd = 0 , positive = 0 , negative = 0 ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++) {
        int num ;
        cin >> num ;
        num % 2 == 0 ? even ++ : odd ++ ;
        if (num > 0) {
            positive ++ ;
        }
        else if (num < 0) {
            negative ++ ;
        }
    }
    cout << "Even: " << even << endl ;
    cout << "Odd: " << odd << endl ;
    cout << "Positive: " << positive << endl ;
    cout << "Negative: " << negative << endl ;
}