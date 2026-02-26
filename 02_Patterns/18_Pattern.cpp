#include<iostream>
using namespace std;

/*
   A
   BC
   CDE
   DEFG
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
        char ch = 'A'+i-1;
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