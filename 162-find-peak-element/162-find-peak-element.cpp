class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
            int mid1=mid+1;
            if(nums[mid]<nums[mid1]) low=mid1;// Has higher probability of finding peak element.
            else high=mid;
        }
        return low;
    }
};