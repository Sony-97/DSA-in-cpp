// Problem: Find the maximum sum of possible subarray.
// Difficulty: medium
// Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int curr_sum = 0;
        for(int val: nums){
            curr_sum += val;
            max_sum = max(curr_sum, max_sum);
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        return max_sum;
    }
};
