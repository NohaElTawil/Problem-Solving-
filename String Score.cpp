#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    int n ;
    cin >> n ;
    string w ;
    cin >> w ;
    long long s = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (w[i]=='V') {
            s+=5 ;
        }
        else if (w[i]=='W') {
            s+=2 ;
        }
        else if (w[i]=='X') {
            i++;
        }
        else if (w[i]=='Y') {
            i++;
            w.push_back(w[i]) ;
            n++;
        }
        else  {
            if (w[i+1]=='V') {
                s /= 5;
                i++ ;
            }
            else if (w[i+1]=='W') {
                s/=2 ;
                i++ ;
            }
        }
    }
    cout << s ;
}