#include<iostream>
using namespace std;

// Pattern 17
/*

_ _ _ A _ _ _
_ _ A B A _ _
_ A B C B A _
A B C D C B A

*/

void Pattern17(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i-1)/2;
        for(int j=1; j<=2*i-1; j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern17(n);
}