#include<iostream>
using namespace std;

/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
*/

int main()
{
    int n ;
    cout << "Enter:";
    cin >> n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n-i+1)
        {
            cout << j;
            j++;
        }
        int star1 = i-1;
        while(star1)
        {
            cout << "*";
            star1--;
        }
        int star2 = i-1;
        while(star2)
        {
            cout << "*";
            star1=star1+1;
            star2--;
        }
        int no = j-1;
        while(no)
        {
            cout << no;
            no=no-1;
        }
        cout << endl;
        i++;
    }

    return 0;
}