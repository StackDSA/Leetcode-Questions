class Solution {
    private:
    int binarySearch(vector<int> nums, int target, int l, int r){
        if(l>r) return -1;
        int mid=l+(r-l)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>=nums[l]){
            if(target<=nums[mid]&&target>=nums[l]) return binarySearch(nums,target,l,mid-1);
            else return binarySearch(nums,target,mid+1,r);
        }
        else{
            if(target>=nums[mid]&&target<=nums[r]) return binarySearch(nums,target,mid+1,r);
            else return binarySearch(nums,target,l,mid-1);
        }
    }
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        return binarySearch(nums,target,l,r);
    }
};