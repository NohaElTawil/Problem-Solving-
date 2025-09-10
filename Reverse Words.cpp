#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string w ;
    getline (cin,w) ;
    long long p1 = 0 , p2 ;
    for (int i = 0 ; i < w.size() ; i++) {
        if (w[i]==' ') {
            p2=i-1 ;
            reverse(w.begin()+p1,w.begin()+p2+1) ;
            p1=i+1;
        }
    }
    p2=w.size()-1 ;
    reverse(w.begin()+p1,w.begin()+p2+1) ;
    cout << w ;
}