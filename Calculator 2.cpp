#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main() {
    string s ;
    cin >> s ;
    int index = 0 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') {
            index = i ;
        }
    }
    int a = stoi (s.substr (0 , index)) ;
    int b = stoi (s.substr (index+1, s.size()-1-index)) ;
    switch(s[index]){
        case '+' : cout << a + b << endl; break;
        case '-' : cout << a - b << endl; break;
        case '*' : cout << a * b << endl ; break;
        case '/' : cout << a / b << endl ;  break;
    }
}