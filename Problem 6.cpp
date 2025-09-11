#include<iostream>
using namespace  std ;
int main () {
    int x ;
    cin >> x ;
    string word ;
    cin >> word ;
    int Acounter = 0 , Dcounter = 0;
    for (int i = 0 ; i < x ; i++) {
        if ( word[i] == 'A') {
            Acounter++ ;
        }
        else if ( word[i] == 'D') {
            Dcounter ++ ;
        }
    }
    if (Acounter > Dcounter) {
        cout << "Anton" << endl;
    }
    else if (Dcounter > Acounter) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
}

