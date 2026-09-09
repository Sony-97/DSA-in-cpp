//Problem: Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Difficulty level: medium
//Approach : Two Pointer
// Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size(); 
        int most_water =0;
        int left =0;  // First pointer initiallize with first element of array.
        int right = n-1;   // Second pointer initiallize with last element of array.
        while(left < right){
            int width= right - left;
            int height= min(heights[left], heights[right]);
            int water= height * width;
            most_water = max(most_water, water);
           
            (heights[left] < heights[right])? left++ : right-- ;
        }
       // returning max_area with containing most water
        return most_water;
    }
};
