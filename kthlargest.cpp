#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
    public:
    int findKthlargest(int k , vector<int>& nums){
        int n = nums.size();

        priority_queue<int,vector<int>,greater <int>>pq;

        for( int i = 0 ; i < n ; i++ ){
            pq.push(nums[i]);

            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "enter size : ";
    cin >> n;

    vector<int> nums(n);

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter kth element : ";
    cin >> k;

    cout << k << "th Largest element is " << obj.findKthlargest(k,nums);
    
    return 0;
}