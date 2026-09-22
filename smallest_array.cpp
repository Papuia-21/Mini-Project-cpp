#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int smallest(vector<int>& nums){
        int min = INT_MAX;

        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] < min ){
                min = nums[i];
            }
        }
        return min;
    }
};

int main()
{
    int n;
    cout << "Enter Size of array : ";
    cin >> n;

    vector<int>nums(n);

    for ( int i = 0 ; i < n ; i++ ){
        cin >> nums[i];
    }

    Solution obj;

    int smallest = obj.smallest(nums);
    
    cout << "Smallest element : " << smallest;

    return 0;
}