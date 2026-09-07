// Problem: Power(x,n)
/*   Constraints:
1. -100.0 < x < 100.0
2. -231 <= n <= 231-1
3. n is an integer.
4. Either x is not zero or n > 0.
5. -104 <= xn <= 104   */
// Difficulty: easy
// Time complexity: O(log n)
// Space complexity: O(1)

class Solution {
public:
    double myPow(double x, int n) {
        // converting n into its binary form
        long binary_n = n;
        double ans = 1;
        // handeling negative values of n
        if(n < 0){
            x = 1/x;
            binary_n = -binary_n;
        } 
       // core logic
        while(binary_n > 0){
            if(binary_n % 2 == 1){
                ans *= x;
             }    
            x *= x ;
            binary_n /= 2;
        }
        return ans;
    }
};
