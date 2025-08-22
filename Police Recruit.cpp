#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long p;
    long long crimecounter = 0;
    long long policecounter = 0;
    for (int i = 0; i < n; i++) {
        cin >> p ;
        if (p>0) {
            policecounter += p ;
        }
        else {
            if (policecounter > 0 ) {
                policecounter -- ;
            }
            else {
                crimecounter ++ ;
            }
        }
    }
    cout << crimecounter << endl;

}
