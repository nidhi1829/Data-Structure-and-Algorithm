#include<iostream>
using namespace std;

// Pattern 15
/*
A B C D E
A B C D
A B C
A B
A
*/

void Pattern15(int n){
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n-i+1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern15(n);
}