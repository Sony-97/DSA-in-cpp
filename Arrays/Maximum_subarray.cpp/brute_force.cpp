// Problem: Find the maximum sum of possible subarray.
// Difficulty: medium
// Time complexity: O(n²)
//Space complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        for(int start=0; start<nums.size();start++){
             int curr_sum = 0;
            for(int end=start; end<nums.size(); end++){
                curr_sum = curr_sum + nums[end];
                max_sum = max(curr_sum, max_sum);
            }
        }
        return max_sum;
    }
};
