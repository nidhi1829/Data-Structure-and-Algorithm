#include<iostream>
using namespace std;

// Pattern 11
/*
1
01
101
0101
10101
*/

void Pattern11(int n){
    for(int i=1; i<=n; i++){
        int start = 1;
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j=1; j<=i; j++){
            cout << start;
            start = 1-start; // flip 
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern11(n);

    return 0;
}