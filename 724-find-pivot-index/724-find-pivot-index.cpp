class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        int left=0,right=sum;
        for(int i=0;i<n;i++){
           if(left+nums[i]==right) return i;
           left+=nums[i];
           right-=nums[i]; 
        }
        return -1;
    }
};