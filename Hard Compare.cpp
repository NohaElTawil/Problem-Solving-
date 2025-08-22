#include<iostream>
#include <cmath>
using namespace  std ;
int main () {
    long long a , b , c , d;
    cin >> a >> b >> c >> d;
    double aa = b*log(a) , bb = d*log(c) ;
    if (aa>bb) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}