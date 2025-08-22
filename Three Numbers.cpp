#include <iostream>
using namespace std;
int main() {
   long long k , s ;
   cin >> k >> s ;
   long long ans = 0 ;
   for (int x = 0 ; x <= k ; x++) {
       for (int y = 0 ; y <= k ; y++) {
         long long z = s - x - y ;
         if (z>=0&&z<=k) {
             ans++;
         }
       }
   }
   cout << ans ;
}
