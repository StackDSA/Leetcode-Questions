class Solution {
    //Struggled a bit. Didn't catch the idea of "starting at index 0/1" completely. To understand it clearly, read this- https://leetcode.com/problems/min-cost-climbing-stairs/discuss/476388/4-ways-or-Step-by-step-from-Recursion-greater-top-down-DP-greater-bottom-up-DP-greater-fine-tuning/831741
    //Below is a Space O(1) solution.
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2) return min(cost[0],cost[1]);
        int n=cost.size();
        int curr;
        int first=cost[0];
        int second=cost[1];
        for(int i=2;i<n;i++){
            curr=cost[i]+min(first,second);
            first=second;
            second=curr;
        }
        return min(first,second);
    }
};