class Solution {
    public: 
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx1 = lower_bound(nums, target);//finds the lowest index having target in it. 
        int idx2 = lower_bound(nums, target+1)-1;// Finds the lowest index having target +1 in it. We find the immediate next index of element having value just greater than target.
        if (idx1 <=idx2 && nums[idx1] == target) //We check whether there exist distinct idx1 and idx2.  
            return {idx1, idx2};
        else
            return {-1, -1};
    }

    int lower_bound(vector<int>& nums, int target) { //basic binary search
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = (r-l)/2+l;
            if (nums[mid] < target)
                l = mid+1;
            else
                r = mid-1;
        }
        return l;
    }
};