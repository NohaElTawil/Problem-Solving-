#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n , h ;
    cin >> n >> h ;
    int a ;
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a ;
        if (a<=h) {
            sum+=1 ;
        }
        else {
            sum+=2 ;
        }
    }
    cout << sum << endl ;
}