#include<iostream>
using namespace std;

// Pattern 04
/*
1
22
333
4444
55555
*/

void Pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern4(n);

    return 0;
}