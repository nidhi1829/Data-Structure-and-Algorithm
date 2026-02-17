#include<iostream>
using namespace std;

// Pattern 05
/*
*****
****
***
**
*
*/

void Pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern5(n);

    return 0;
}