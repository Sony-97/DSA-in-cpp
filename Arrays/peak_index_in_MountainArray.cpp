// Problem : search a peak element in a mountain array.
//Difficulty: medium
// time complexity: O(log n)
// Space complexity: O(1)
//Approach: Binary Search Algorithm

/*Leetcode Problem number-852:

Description:  You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Constraints:
3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
*/

//CODE
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        //since array is mounted, arr[0] and arr[n-1] can't be peak
        int st = 1,end = n-2;

        while(st <= end){

            int mid = st + (end - st) / 2 ;

            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid; //peak found
            }

            else if(arr[mid-1] < arr[mid]){
                st = mid+1; //search in right-half
            }

            else{
                end = mid-1; //search in left-half
            }
        }
        return -1;
    }
};
