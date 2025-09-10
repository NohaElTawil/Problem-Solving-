#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string w ;
    getline (cin, w ) ;
    long long c = 0 ;
    for (int i = 0 ; i < w.size() ; i++) {
        if (w[i]==' ' || w[i]=='!' || w[i]=='.' || w[i]=='?' || w[i]==',') {
            if (i!=0 && w[i-1]>='a' && w[i-1]<='z'|| w[i-1]>='A' && w[i-1]<='Z') {
                c++ ;
            }
        }
    }
    if ((w.back()>='a' && w.back()<='z') || (w.back()>='A' && w.back()<='Z')) {
        c++ ;
    }
    cout << c ;
}