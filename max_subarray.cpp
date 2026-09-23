//Kadans algorithm

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
    public:
    int maxSubarray(vector<int>& nums){
        int n = nums.size();

        int sum = 0;
        int maxi = INT_MIN;

        for( int i = 0 ; i < n ; i++ ){
            if( sum < 0 ){
                sum = 0;
            }

            sum += nums[i];
            if( sum > maxi ){
                maxi = sum;
            } 
        }
        return maxi;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter size of nums : ";
    cin >> n;
     
    vector<int> nums(n);

    for( int i = 0 ; i < n ; i++ ){
        cin >> nums[i];
    }

    cout << "Maxi Subarray : " << obj.maxSubarray(nums);

    return 0;
}