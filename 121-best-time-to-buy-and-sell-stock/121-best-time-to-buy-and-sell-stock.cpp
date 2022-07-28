class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxprofit=0;
        int min=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
            else{
                maxprofit=max(maxprofit, nums[i]-min);
            }
        }
        return maxprofit;
    }
};