#include<iostream>
using namespace std;

/*
   1
   21
   321
   4321
*/

int main()
{
    // Method 1
    // int n ;
    // cout << "Enter: ";
    // cin >> n;

    // int row = 1;
    // while(row<=n)
    // {
    //     int column = 1;
    //     int value = row;
    //     while(column<=row)
    //     {
    //         cout << value;
    //         value--;
    //         column++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Method 2
    int n ;
    cout << "Enter: ";
    cin >> n;

    int row = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=row)
        {
            cout << (row-column+1);
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}