#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int max_roll = max(Y, W);
    int favorable = 6 - max_roll + 1;
    int denominator = 6;


    int gcd = std::gcd(favorable, denominator);
    favorable /= gcd;
    denominator /= gcd;

    cout << favorable << "/" << denominator << endl;

    return 0;
}