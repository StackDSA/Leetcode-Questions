class Solution {
public:
    int climbStairs(int n) {
        //Basically a Fibonacci Sequence Q but memoization is needed.
        //Since we are required to find the total number of ways, we will add the number of ways we get after decreasing one step and 2 steps respectively. Space otimised on my own.
        //Used Bottom Up approach
        if ( n <= 2 ) return n;        
        int curr;
        int prev1= 1, prev2 = 2;
        for ( int i = 3; i <= n; i++ ) {
            curr = prev1 + prev2;
            prev1=prev2;
            prev2=curr;
        }
        
        return prev2;
    }
};