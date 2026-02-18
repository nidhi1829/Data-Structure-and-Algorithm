#include<iostream>
using namespace std;

// Pattern 08
/*
* * * * * * * * *
_ * * * * * * * _
_ _ * * * * * _ _
_ _ _ * * * _ _ _
_ _ _ _ * _ _ _ _
*/

void Pattern8(int n){
    for(int i=1; i<=n; i++){
        for(int space=1; space<=i-1; space++){
            cout << " ";
        }
        for(int j=1; j<=(2*n-(2*i-1)); j++){
            cout << "*";
        }
        for(int space=1; space<=i-1; space++){
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern8(n);

    return 0;
}