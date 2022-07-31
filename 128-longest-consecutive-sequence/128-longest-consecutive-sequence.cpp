class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxcount=0,count=1,n=nums.size();
        if(n<=1) return n;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1) count++;
            else if(nums[i]==nums[i-1]) continue;
            else{
                maxcount=max(maxcount,count);
                count=1;
            }
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};