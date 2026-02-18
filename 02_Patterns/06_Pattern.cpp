#include<iostream>
using namespace std;

// Pattern 06
/*
12345
1234
123
12
1
*/ 

void Pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern6(n);

    return 0;
}