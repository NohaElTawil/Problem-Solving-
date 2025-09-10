#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    long long n , m ;
    cin >> n >> m ;
    char arr[n][m];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> arr[i][j] ;
        }
    }
    long long x , y ;
    cin >> x >> y ;
    x-- ;
    y-- ;
    if (arr[max(0LL,x-1)][y]=='x' && arr[min(n-1,x+1)][y]=='x' && arr[x][min(m-1,y+1)]=='x' && arr[x][max(0LL,y-1)]=='x'
        && arr[max(0LL,x-1)][min(m-1,y+1)]=='x' && arr[max(0LL,x-1)][max(0LL,y-1)]=='x' && arr[min(n-1,x+1)][min(m-1,y+1)]=='x' && arr[min(n-1,x+1)][max(0LL,y-1)]=='x') {
        cout << "yes" ;
    }
    else {
        cout << "no" ;
    }
}