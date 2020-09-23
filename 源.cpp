#include <iostream>
#include <vector>
#include <algorithm>

using  namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>nums;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            nums.push_back(arr[i]);
            if (check(nums))ans++;
        }
        return ans;
    }
    bool check(vector<int>nums) {
        for (int i : nums)
            if (i >= nums.size())return false;
        return true;
    }
};

int main() {
    Solution sol;
    vector<int>nums = { 3,0,2,1,4 };
    cout << sol.maxChunksToSorted(nums);
    return 0;
}