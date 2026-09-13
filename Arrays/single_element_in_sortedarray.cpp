// Problem : search a single non duplicate element in the sorted array.
//Difficulty: medium
// time complexity: O(log n)
// Space complexity: O(1)
//Approach: Binary Search Algorithm

/*Leetcode Problem number-852:

Description: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.  

Constraints:
1 <= nums.length <= 105
0 <= nums[i] <= 105
*/

//CODE
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        //if array contains single element only
        if(n == 1)   return arr[0];
        
        int st = 0;
        int end = n - 1;
        
        while(st <= end){
            int mid = st + (end - st) / 2;

            //if resulting element is on the 0th index
            if(mid == 0 && arr[0] != arr[1])  return arr[mid];

            //if resulting element is on the (n-1)th index
            if(mid == n-1 && arr[n-1] != arr[n-2])   return arr[mid];

            //found the singlenonduplicate element
            if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1])  return arr[mid];
            
            //if arr[mid] is on the even index
            if(mid%2 == 0){

                //search in the left-half of mid
                if(arr[mid-1] == arr[mid]){
                    end = mid-1;
                }   

                //search in the right-half of mid
                else {
                    st = mid+1;
                }
                
            }
            else{

                //search in the right-half of mid
                if(arr[mid-1] == arr[mid]){
                    st = mid+1;
                }

                //search in the left-half of mid
                else{
                end = mid-1;
                }

            }
        }
        return -1;
    }
};
