class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> total;
        int n = nums.size();
        if(n<4)  return total;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
           for(int j=i+1;j<n;j++){
               int k=j+1,l=n-1,sum=target-nums[i]-nums[j];
               while(k<l){
                   if(nums[k]+nums[l]==sum){
                       total.push_back({nums[i],nums[j],nums[k],nums[l]});
                       int a=nums[k],b=nums[l];
                       while(k<l&&a==nums[k]) ++k;
                       while(k<l&&b==nums[l]) --l;
                   }
                   else if(nums[k]+nums[l]>sum){
                       l--;
                   }
                   else{
                       k++;
                   }
               }
               while(j<n-2&&nums[j]==nums[j+1]) ++j;
           }
            while(i<n-1&&nums[i]==nums[i+1]) ++i;
        }
        return total;
    }
};