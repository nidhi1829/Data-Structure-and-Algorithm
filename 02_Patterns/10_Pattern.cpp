#include<iostream>
using namespace std;

/*
   n = 4

   1
   23
   345
   4567
*/

int main()
{   
    // Method 1
    // int n;
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
    //         value++;
    //         column++;
    //     }
    
    //     cout << endl;
    //     row++;
    // }
    
    // Method 2 (without value)
    int n;
    cout << "Enter: ";
    cin >> n;

    int row = 1;
    while(row<=n)
    {
        int column = 0;
        while(column<row)
        {
            cout << row+column;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}