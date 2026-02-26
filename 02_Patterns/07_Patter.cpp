#include<iostream>
using namespace std;

/*
   ****
   ***
   **
   *
*/

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;
    
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=(n-row+1))
        {
            cout << "*";
            column++;
        }
        cout << endl;
        row++;
    }
    

    return 0;
}