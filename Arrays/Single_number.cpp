// Problem: Single Number
// Difficulty: Easy
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val: nums){
            ans ^= val;
        }
        return ans;
    }
};
