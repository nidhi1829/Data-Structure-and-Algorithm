#include<iostream>
using namespace std;

/*
    1
    22
    333
    4444
*/

int main()
{
    int n;
    cout << "Enter: ";
    cin >>n;

    int row = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=row)
        {
            cout << row;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}