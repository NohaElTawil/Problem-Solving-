#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
    string year;
    cin >> year ;
    int yearAsInt = stoi(year) ;
    yearAsInt++ ;
    year = to_string(yearAsInt) ;
    while (true) {
        char num1 = year[0] ;
        char num2 = year [1] ;
        char num3 = year [2] ;
        char num4 = year [3] ;
        if (num1!=num2 && num1!=num3 && num1!=num4 && num2!=num3 && num2!=num4 && num3!=num4 ) {
            cout << year ;
            break ;
        }
        int yearAsInt = stoi(year) ;
        yearAsInt++ ;
        year = to_string(yearAsInt) ;
    }
}