#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> topKFrequent(vector<int>& nums,int k){
        int n = nums.size();

        map<int,int> mp;

        for( int i = 0 ; i < n ; i++ ){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> vp;

        for(auto x : mp){
            vp.push_back({x.second,x.first});
        }

        sort(vp.rbegin(),vp.rend());

        vector<int>ans;

        for(auto x : vp){
            ans.push_back({x.second});
            k--;
            if(k==0){
                break;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0 ; i < n ; i++ ){
        cin >> nums[i];
    }

    int k;
    cout << "Enter K element : ";
    cin >> k;

    vector<int> result = obj.topKFrequent(nums,k);
    
    for(auto x : result){
        cout << x << " ";
    }
    return 0;
}