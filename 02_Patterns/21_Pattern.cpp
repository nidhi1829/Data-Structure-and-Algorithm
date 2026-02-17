#include<iostream>
using namespace std;

// Pattern 21
/*

* * * *
* _ _ *
* _ _ *
* * * *

*/

void Pattern21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if( i == 1 || j == 1 || i == n || j == n){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern21(n);

    return 0;
}