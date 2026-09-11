// Problem : search a given target in an rotated sorted array, return -1 if not found.
//Difficulty: medium
// time complexity: O(log n)
// Space complexity: O(1)

/*Leetcode Problem number-33:

Description:  There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

Constraints:
1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/
//Approach: Binary Search Algorithm

//CODE
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){

            int mid = start + (end - start)/2 ;

            if(target == nums[mid]){
                return mid;  //target found!
            }

            //checking how is array rotated
            else if(nums[start] <= nums[mid]){

                //search in left-half
                if(nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }
                //search in right-half
                else{
                    start = mid + 1;
                }
            }
            else{
                //search in right-half
                if(nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }
                //search in left-half
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;  //if target doesn't exist!
    }
};
