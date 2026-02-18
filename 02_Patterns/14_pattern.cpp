#include<iostream>
using namespace std;

//Pattern 14
/*
A
AB
ABC
ABCD
ABCDE
*/

void Pattern14(int n){
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main(){
    int n ;
    cout << "Enter: ";
    cin >> n;

    Pattern14(n);

    return 0;
}