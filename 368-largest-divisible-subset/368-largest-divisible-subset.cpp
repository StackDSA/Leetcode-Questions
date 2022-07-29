class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size(),mx=0;
        vector<int>dp(n,1);
        
        //sort so that evey element is divisible by all the factors present on left
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
              if(nums[i]%nums[j]==0&&dp[i]<dp[j]+1)
                  dp[i]=dp[j]+1;
            }
        }
        
        mx=0;  //stores the length of largest subsetet
        int prev=0;   // stores the largest number dividing all subsets
        for(int i=0;i<n;i++)
        {
            if(dp[i]>mx)
            {
                mx=dp[i];
                prev=nums[i];
            }
        }
        
        vector<int>ans;
        int key=mx; //key is the length of subset which will one by one reduce if the corresponding ele is incldued int ans
        
        for(int i=n-1;i>=0;i--)
        {
            // if dp at i iss the key and the nums[i] is divisible by prev then update                  every variable for further findings
            if(dp[i]==key&&prev%nums[i]==0)
            {
                ans.push_back(nums[i]);
                key--;
                prev=nums[i];
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};