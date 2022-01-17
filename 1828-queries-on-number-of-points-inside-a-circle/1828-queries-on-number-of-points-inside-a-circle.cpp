class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        int n=points.size(),m=queries.size();
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if((queries[i][2]*queries[i][2])>=((queries[i][0]-points[j][0])*(queries[i][0]-points[j][0])+(queries[i][1]-points[j][1])*(queries[i][1]-points[j][1]))) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};