#include<iostream>
using namespace  std ;
int main () {
    int n ;
    cin >> n ;
    int a , b ;
    cin >> a >> b ;
    int sum = 0 ;
    for (int i = 1 ; i <= n ; i++) {
        int sumofdigits = 0 ;
        for (int j = 0 ; j <= 4; j++) {
            sumofdigits += (int)(i/pow(10,j))%10;
        }
        if (sumofdigits >= a && sumofdigits <=b) {
            sum+=i ;
        }
    }
    cout << sum ;
}