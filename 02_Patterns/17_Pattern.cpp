#include<iostream>
using namespace std;

/*
   A
   BC
   DEF
   GHIJ
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
        int j = 1;
        while(j<=i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}