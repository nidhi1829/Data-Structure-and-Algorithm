#include<iostream>
using namespace std;

/*
    1234
    1234
    1234
*/

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    int i = 1;
    {
        while(i<=n)
        {
            int j = 1;
            while(j<=n)
            {
                cout << j;
                j++;
            }
            cout << endl;
            i++;
        }
    }

    return 0;
}