//Problem: Find the element which has maximum occurence in the array.
//Difficulty: easy
// Time complexity: O(N2)   
//Space complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       
        for(int val: nums){
            int count=0;
            for(int ele: nums){
                if(val==ele){
                    count++;
                }
            }
            if(count>n/2){
                return val;
            }
        }
        return -1;
    }
};
