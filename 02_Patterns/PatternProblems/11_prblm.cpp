#include<iostream>
using namespace std;

/*
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
6 7 8 9 10
*/

int main(){
    int n; 
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int count = i + 1;
        for(int j = 1; j <= n; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}