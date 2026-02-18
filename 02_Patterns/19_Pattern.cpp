#include<iostream>
using namespace std;

// Pattern 19
/*

* * * * * * * * * * 
* * * * _ _ * * * *
* * * _ _ _ _ * * *
* * _ _ _ _ _ _ * *
* _ _ _ _ _ _ _ _ *
* _ _ _ _ _ _ _ _ *
* * _ _ _ _ _ _ * *
* * * _ _ _ _ * * *
* * * * _ _ * * * *
* * * * * * * * * *

*/

void Pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "*" ;
        }
        int space = 2*i-2;
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        int space =  2*(n-i);
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern1(n);
    Pattern2(n);
    
}