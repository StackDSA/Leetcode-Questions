class Solution {
    void find(int idx, int n, vector<int> &candidates, int target, vector<vector<int>> &all, vector<int> &subset)
    {
        if(target == 0){
            all.push_back(subset);
            return;
        } 
        // taking the current element 
        for(int i = idx; i < n; i++)
        {
            if(i > idx && candidates[i] == candidates[i-1])
                continue;
            if(candidates[i] > target)
                break;
            subset.push_back(candidates[i]);
            find(i+1, n, candidates, target-candidates[i], all, subset);
            subset.pop_back();
        }
    }
public:    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> all;
        vector<int> subset;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        find(0, n, candidates, target, all, subset);
        return all;
    }
};