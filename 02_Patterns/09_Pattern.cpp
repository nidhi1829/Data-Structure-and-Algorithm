#include<iostream>
using namespace std;

/*
   n = 4

   1
   23
   456
   78910
   
*/

int main()
{
    int n;
    cout << "Enter: ";
    cin >>n;
    
    int count = 1;
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=row)
        {
            cout << count;
            count++;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}