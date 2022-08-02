class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int>mp;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp.insert(matrix[i][j]);
            }
        }
        int i=1;
        for(auto it: mp){
            if(i==k) return it;
            else i++;
        }
        return -1;
    }
};