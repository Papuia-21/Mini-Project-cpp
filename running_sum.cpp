#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(nums.size());
        result[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            result[i] = result[i - 1] + nums[i];
        }

        return result;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};

    Solution obj;
    vector<int> ans = obj.runningSum(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}