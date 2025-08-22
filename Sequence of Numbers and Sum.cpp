#include <iostream>
#include <cmath>
using namespace std;
int main() {
    while(true) {
      long long n , m ;
      cin >> n >> m ;
      if (n<=0 || m<=0) {
          break;
      }
      long long min = 0 , max = 0 ;
      if (n>m) {
          min = m ;
          max = n ;
      }
      else {
          min = n ;
          max = m ;
      }
      long long sum = 0 ;
      for (int i = min ; i <= max ; i++) {
          cout << i << ' ' ;
        sum +=i ;
      }
        cout << "sum = " << sum << endl ;
    }
}