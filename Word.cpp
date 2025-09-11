#include <iostream>
using namespace std;
int main() {
    string s ;
    cin >> s ;
    char uppercase = 0 , lowercase = 0 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase++;
        }
    }
    if (uppercase > lowercase) {

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 32 ;
            }
        }
    }

    else  {
        for (int i = 0 ; i < s.size() ; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32 ;
            }
        }
    }
    cout << s <<endl;
}

