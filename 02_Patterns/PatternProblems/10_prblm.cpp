#include<iostream>
using namespace std;

/*
6 
1 6
1 2 6
1 2 3 6
1 2 3 4 6
1 2 3 4 5 6
*/

int main(){
    int n; 
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if( i == j ) cout << n << " ";
            else cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}