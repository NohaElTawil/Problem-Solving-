#include<iostream>
using namespace  std ;
int main () {
    int N ;
    bool found = true ;
    cin >> N ;
    for (int i=2 ; i <= N ; i+=2 ) {
        cout << i << endl ;
    }
    if (N==1) {
        cout << -1 << endl ;
    }
}