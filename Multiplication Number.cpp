#include<iostream>
using namespace  std ;
int main () {
    int counter = 1 ;
    int num ;
    cin >> num ;
    while (counter <= 12) {
        cout << num << " " << "*" << " " << counter << " " << "=" << " " << num * counter << endl;
        counter ++ ;
    }
}
