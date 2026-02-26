#include<iostream>
using namespace std;

/*
   A
   BB
   CCC
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
        while(j<=i)
        {
            char ch = 'A'+i-1;
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}