#include<iostream>
using namespace std;

// Pattern 07
/*
_ _ _ _ * _ _ _ _
_ _ _ * * * _ _ _
_ _ * * * * * _ _
_ * * * * * * * _
* * * * * * * * *
*/

void Pattern7(int n){
    for(int i = 1; i <= n; i++){
        for(int space = 1; space<=n-i; space++){
           cout << " " ;
        }
        for(int j = 1; j <= 2*i-1; j++){
           cout << "*";
        }
        for(int space = 1; space <= n-i; space++){
           cout << " ";
        }cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern7(n);

    return 0;
}