#include<bits/stdc++.h>
using namespace std;

void MaxNdMinElement(){

    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);

    int maxElement = *max_element(a,a+n);
    int minElement = *min_element(a,a+n);

    cout << "Max Element: " << maxElement << endl;
    cout << "Min Element: " << minElement << endl;

}

int main(){

    MaxNdMinElement();

    return 0;
}