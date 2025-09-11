#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    int len = S.length();
    string lastDigits;
    if (len >= 3)
        lastDigits = S.substr(len - 3);
    else
        lastDigits = S;

    int num = stoi(lastDigits);

    if (num % 8 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}