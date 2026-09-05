//Problem: Find the element which has maximum occurence in the array.
// Difficulty: easy
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0,ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(nums[i] == ans){
                freq++;
            }
            else{
                freq--;
            }
        }
        int count = 0;
        for(int i: nums){
            if(ans == i){
                count++;
            }
        }
        int res = -1;
        if(count > n/2)  res = ans;
        
        return res;
    }
};
