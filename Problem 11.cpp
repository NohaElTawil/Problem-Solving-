#include<iostream>
using namespace  std ;
int main () {
    long long n ;
    cin >> n ;
    bool flag = true ;
    int level = 0 , totalsum = 0 ;
    for (int i = 1 ; flag ; i++) {
        level+=i ;
        totalsum+=level ;
        if (totalsum>n) {
            cout << i-1 ;
            break;
        }
    }
}