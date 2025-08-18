#include <iostream>
#include <cmath>
using namespace std ;
int main () {
  int n ;
  cin >> n ;
  int arr [n] ;
  int x ;
  for (int i = 0 ; i < n ; i++) {
      cin >> arr[i] ;
  }
  cin >> x ;
  bool flag = false ;
  for (int i = 0 ; i < n ; i++) {
          if (x==arr[i]) {
              cout << i << endl;
              flag = true ;
          }
  }
  if (flag == false) {
      cout << "-1" ;
  }
}