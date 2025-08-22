#include<iostream>
using namespace  std ;
int main () {
    int n ;
    cin >> n ;
    int arr[n] ;
    bool flag = true ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    for (int i = 0 ; i < n ; i++) {
        int ii = n - (i+1) ;
        if(arr[i]!=arr[ii]){
          flag = false ;
        }
    }
    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}