#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int arr[5][5] ;
    int Rpos , Cpos ;
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            cin >> arr[i][j] ;
            if (arr[i][j]==1) {
                Rpos = i ;
                Cpos = j ;
            }
        }
    }
    int sum = abs (Rpos - 5/2) + abs (Cpos - 5/2) ;
    cout << sum << endl;

}





