#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public: 
        int LowerBound(vector<int> &arr, int target, int n){
            int low = 0;
            int high = n-1;
            int first = -1;

            while(low <= high){
                int mid = (low + high)/2;
                if(arr[mid] >= target){
                    first = mid;
                    high = mid - 1;
                } 
                else{
                        low = mid + 1;
                }
            }
            return first;
        } 
        int UpperBound(vector<int> &arr, int target, int n){
            int low = 0;
            int high = n-1;
            int last = -1;

            while(low <= high){
                int mid = (low + high)/2;
                if(arr[mid] > target){
                    last = mid;
                    high = mid - 1;
                } 
                else{
                    low = mid + 1;
                }
            }
            return last;
        }
        pair<int, int> FirstNdLastOccurrence(vector<int> &arr, int target, int n){
            int lb = LowerBound(arr, target, n);
            if((lb == n) || (arr[lb] != target)){
                return {-1, -1};
            }
            int ub = UpperBound(arr, target, n);
            return {lb, ub - 1};
        }
};

int main(){

    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }cout << endl;

    int target;
    cout << "Enter Target: ";
    cin >> target;

    Solution finder;
    pair<int, int> result = finder.FirstNdLastOccurrence(arr, target, n);
    cout << "First And Last Occurrence of target: " << result.first << " " << result.second << endl;

    return 0;
}