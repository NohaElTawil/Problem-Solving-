#include <iostream>
using namespace  std ;
int main () {
    double N;
    cin >> N;
    int integerPart = static_cast<int>(N);
    double decimalPart = N - integerPart;
    if (decimalPart == 0) {
        cout << "int " << integerPart << endl;
    }
    else {
        cout << "float " << integerPart << " " << fixed;
        cout.precision(6);
        cout << decimalPart << endl;
    }
}