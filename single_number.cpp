#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int singleNumber(vector<int>& nums)
    {
        int n = nums.size();
        int Xor = 0;

        for(int i = 0 ; i < n ; i++ ){
            Xor = Xor^nums[i];
        }
        return Xor;
    }
};

int  main()
{
    Solution obj;

    int n;
    cout << "Enter size : ";
    cin >> n;

    vector<int> nums(n);

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> nums[i];
    }

    int result = obj.singleNumber(nums);

    cout << result;

    return 0;
}