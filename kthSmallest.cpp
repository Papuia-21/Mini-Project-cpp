#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution {
    public:
    int kthSmallest(vector<int>& nums, int k){
        int n = nums.size();

        //create max heap
        priority_queue<int>pq;

        for(int i = 0 ; i < n ; i++ ){
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
    cout << "Enter size of array ";
    cin >> n;

    vector<int>nums(n);

    for( int i = 0 ; i < n ; i++ ){
        cin >> nums[i];
    }

    int k;
    cout << "Enter value of K ";
    cin >> k;

    cout << k << "th Smallest element is " << obj.kthSmallest(nums,k);

    return 0;
}