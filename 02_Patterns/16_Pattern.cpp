#include<iostream>
using namespace std;

// Pattern 16
/*
A
B B
C C C
D D D D
E E E E E 
*/

void Pattern16(int n){
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern16(n);
}