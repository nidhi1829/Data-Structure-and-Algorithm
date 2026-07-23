#include<iostream>
using namespace std;

/*
    ABC
    DEF
    GHI
*/

int main()
{
    int n ;
    cout << "Enter: ";
    cin >> n;

    int i = 1;
    char ch = 'A';
    while(i<=n)
    {
        int j = 0;
        while(j<n)
        {
            cout << ch;
            ch ++;
            j++;
        } 
        cout << endl;
        i++;
    }

    return 0;
}