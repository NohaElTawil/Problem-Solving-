#include <iostream>
using namespace std ;
int main () {
  int n ;
  cin >> n ;
  int arr[n] ;
  cin >> arr[0] ;
  int min = arr[0] , max = arr[0] ;
  for (int i = 1 ; i < n ; i++) {
      cin >> arr[i] ;
     if (arr[i]<min) min = arr[i] ;
     if (arr[i]>max) max = arr[i] ;
     }
  cout << min << ' ' << max;
  return 0;
}