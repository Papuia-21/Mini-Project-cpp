#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int largest(vector<int> &arr){
        int n = arr.size();
        
        int maxi = INT_MIN;

        for ( int i = 0 ; i < n ; i++ ){
            if( arr[i] > maxi ){
                maxi = arr[i];
            }
        }
        return maxi;
    }
};

int main()
{
    vector<int> arr = {10 , 5 , 60 , 40 , 90};

    Solution obj;
    cout << obj.largest(arr);

    return 0;
}