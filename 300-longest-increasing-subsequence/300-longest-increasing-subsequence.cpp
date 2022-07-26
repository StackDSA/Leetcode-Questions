class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // O(nlogn) solution is really easy to implement. Just have to find lower bound of the element immediately lesser than current element and replace it.
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            auto it = lower_bound(ans.begin(), ans.end(), nums[i]);
            if(it==ans.end()) ans.push_back(nums[i]);
            else *it = nums[i];
        }
        return ans.size();
    }
};