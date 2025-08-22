#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n ;
    cin >> n ;
    long long counter = 1 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            if (j==3)
                cout << "Pum";
            else
         cout << counter << ' ' ;
         counter ++ ;
        }
        cout << endl;
    }
}