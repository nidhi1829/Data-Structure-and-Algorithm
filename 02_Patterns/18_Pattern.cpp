#include<iostream>
using namespace std;

// Pattern 18
/*

E 
D E
C D E
B C D E
A B C D E

*/

void Pattern18(int n){
    for(int i=1; i<=n; i++){
        for(char ch = 'E'- i+ 1; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern18(n);
}