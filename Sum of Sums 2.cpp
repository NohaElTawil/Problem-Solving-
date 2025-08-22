#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n , a , b ;
    cin >> n >> a >> b ;
    long long sum1 = 0 ;
    for (int i = 0 ; i <= n ; i++) {
        long long ii = i , sum2 = 0 ;
      while (ii!=0) {
          long long lastdigit = ii%10 ;
          sum2+=lastdigit ;
          ii/=10 ;
      }
      if (sum2>=a && sum2<=b) {
          sum1+=i ;
      }
    }
    cout << sum1 ;
}