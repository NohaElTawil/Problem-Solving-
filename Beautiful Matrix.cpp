#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int n ;
   cin >> n ;
   int arr[n][n] ;
   int Rpos , Cpos ;
   for (int i = 0 ; i < n ; i++) {
       for (int j = 0 ; j < n ; j++) {
           cin >> arr[i][j] ;
           if (arr[i][j]==1) {
               Rpos = i ;
               Cpos = j ;
           }
       }
   }
   int sum = abs (Rpos - n/2) + abs (Cpos - n/2) ;
   cout << sum << endl;

}
