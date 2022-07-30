class Solution {
    void solve(set<vector<int>>&ans,vector<int>&temp,vector<int>candidates, int target,int n, int i){ 
        if(target<0) return;
        if(target==0){
            ans.insert(temp);
            return;
        }
        if(i>=n) return;
        temp.push_back(candidates[i]);
        target-=candidates[i];
        solve(ans,temp,candidates,target,n,i+1);
        solve(ans,temp,candidates,target,n,i);
        temp.pop_back();
        target+=candidates[i];
        solve(ans,temp,candidates,target,n,i+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        set<vector<int>>ans;
        int n=candidates.size();
        solve(ans,temp,candidates,target,n,0);
        vector<vector<int>>fans;
        for(auto it: ans){
            fans.push_back(it);
        }
        return fans;
    }
};