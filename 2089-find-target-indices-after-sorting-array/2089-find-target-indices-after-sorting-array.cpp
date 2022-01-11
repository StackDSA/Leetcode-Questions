class Solution {
    void check(vector<int>&ans,vector<int>nums,int target, int l, int r){
        if(l>r) return;
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            check(ans,nums,target,l,mid-1);
            ans.push_back(mid);
            check(ans,nums,target,mid+1,r);
        }
        else if(nums[mid]<target){
            check(ans,nums,target,mid+1,r);
        }
        else check(ans,nums,target,l,mid-1);
    }
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        if(nums.size()==1){
          if(nums[0]==target){
              ans.push_back(0);
          }  
            return ans;
        } 
        int l=0,r=nums.size()-1;
        check(ans,nums,target,l,r);
        sort(ans.begin(),ans.end());
        return ans;
    }
};