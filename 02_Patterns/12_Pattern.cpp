#include<iostream>
using namespace std;

// Pattern 12
/*

1 _ _ _ _ _ _ 1
1 2 _ _ _ _ 2 1
1 2 3 _ _ 3 2 1
1 2 3 4 4 3 2 1

*/

void Pattern12(int n){
    int space = 2 *(n-1);
    for(int i=1; i<=n; i++){
        //Numbers
        for(int j=1; j<=i; j++){
            cout << j;
        }
        //Spaces
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        //Numbers
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -=2;
    }
}




int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    Pattern12(n);
}