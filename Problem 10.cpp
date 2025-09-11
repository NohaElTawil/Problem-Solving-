#include<iostream>
using namespace  std ;
int main () {
    int n ;
    cin >> n ;
    int arr[3] = {0};
    for (int i = 0 ; i < n ; i++) {
        int x ;
        cin >> x ;
        arr[i%3]+=x ;
    }
    if (arr[0]>= arr[1] && arr[0]>=arr[2]) {
        cout << "chest" ;
    }
    else if (arr[1]>=arr[2]) {
        cout << "biceps" ;
    }
    else {
        cout << "back" ;
    }
}
