class Solution {
    int solve(vector<int> nums, int target,vector<int>&dp){
        if(dp[target]>-1) return dp[target];
        int ans=0;
        for(auto it: nums){
            if(it<=target) ans+=solve(nums,target-it,dp);
        }
        dp[target]=ans;
        return dp[target];
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        dp[0]=1;
        solve(nums,target,dp);
        return dp[target];
    }
};