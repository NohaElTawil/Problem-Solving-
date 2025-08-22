#include<iostream>
using namespace  std ;
int main () {
    int n ;
    cin >> n ;
    int arr[n] ;
    int x ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    cin >> x ;
    for (int i = 0 ; i < n ; i++) {
        if (x==arr[i]) {
            cout << i << endl;
            return 0 ;
        }
    }
        cout << "-1" << endl;
}