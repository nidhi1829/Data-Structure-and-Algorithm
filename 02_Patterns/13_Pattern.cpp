#include<iostream>
using namespace std;

/*
    ABC
    ABC
    ABC
*/

int main()
{
    int n ;
    cout << "Enter: ";
    cin >> n;

    int i = 1;
    while(i<=n)
    {
        int j = 0;
        while(j<n)
        {
            char ch = 'A'+ j;
            cout << ch;
            j++;
        } 
        cout << endl;
        i++;
    }

    return 0;
}