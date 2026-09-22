#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class kthLargest {
    public:
    int k;
    priority_queue<int,vector<int>,greater<int>>pq;

    kthLargest(int k , vector<int>& nums){
        int n = nums.size();
        this->k = k;

        for( int i = 0 ; i < n ; i++ )
        {
            pq.push(nums[i]);

            if(pq.size()>k)
            {
                pq.pop();
            }
        }
    }

    int add(int val){
        pq.push(val);

        if(pq.size()>k)
        {
            pq.pop();
        }
        return pq.top();
    }
};

int main()
{
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

    kthLargest obj(k,nums);

    cout << k << "th largest element is " << obj.pq.top();
    
    return 0;
}