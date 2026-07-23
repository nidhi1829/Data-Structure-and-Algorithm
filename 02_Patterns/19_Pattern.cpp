#include<iostream>
using namespace std;

/*
   D
   CD
   BCD
   ABCD
*/

int main()
{
    int n ;
    cout << "Enter: ";
    cin >> n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        char ch = 'D'-i+1;
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