#include <iostream>
#include <cmath>
using namespace std ;
int main () {
  int n ;
  cin >> n ;
  int arr[n] ;
  for (int i = 0 ; i <= n ; i++) {
      cin >> arr[i];
  }
  float sum = 0 ;
  for (int i = 0 ; i <= n ; i++) {
      sum += arr[i] ;
  }
  cout << sum << ' ' << (sum/n) << endl;
  return 0;
}