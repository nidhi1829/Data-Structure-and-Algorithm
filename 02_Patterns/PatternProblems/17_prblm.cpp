#include<iostream>
using namespace std;

/* 
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
*/

int main(){
    int n; 
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout << i << " ";
        }
        int count = i + 1;
        for(int k = i; k < n; k++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}