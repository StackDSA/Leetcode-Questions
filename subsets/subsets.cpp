class Solution {
public:
    void helper(set<vector<int>>&ans, vector<int>&temp, vector<int>nums, int index, int size){
        if(index==size){
            temp.push_back(nums[index]);
            ans.insert(temp);
            temp.pop_back();
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[index]);
        ans.insert(temp);
        helper(ans,temp,nums,index+1, nums.size()-1);  
        temp.pop_back();
        ans.insert(temp);
        helper(ans,temp,nums,index+1, nums.size()-1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> fans;
        set<vector<int>>ans;
        vector<int> temp;
        helper(ans,temp,nums,0, nums.size()-1);
        std::copy(ans.begin(), ans.end(), std::back_inserter(fans));
        return fans;
    }
};