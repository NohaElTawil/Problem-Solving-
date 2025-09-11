#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    int n ;
    cin >> n ;
    int x ;
    int ones = 0 , twos = 0 , threes = 0 , fours = 0 ;
    for (int i = 0 ; i < n ; i++) {
        cin >> x ;
        if (x==1) ones++;
        else if (x==2) twos++;
        else if (x==3) threes++;
        else if (x==4) fours++;
    }
    int taxi = 0 ;
    taxi = fours ;
    taxi += threes ;
    ones -= threes ;

    taxi += twos/2 ;
    if (twos%2 == 1) {
        taxi++;
        ones -= 2;
    }
    if (ones>0)taxi+= ceil(ones/4.0) ;
    cout << taxi ;
}
