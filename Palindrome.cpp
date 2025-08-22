#include<iostream>
using namespace  std ;
int main () {
  long long n ;
  cin >> n ;
  long long r = 0 , m = n;
  while (n!=0) {
      long long last = n % 10 ;
      n/=10 ;
      r = (r*10) + last ;
  }
  cout << r << endl ;
  if (m==r) {
      cout << "YES" << endl;
  }
  else {
      cout << "NO" << endl;
  }
}
