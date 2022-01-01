class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        v.push_back({1});
        v.push_back({1,1});
        for(int i=2;i<=rowIndex;i++){
            int n=v[i-1].size();
            vector<int>temp;
            for(int j=0;j<=n;j++){
                if(j==0){
                    temp.push_back(1);
                }
                else if(j==n){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(temp);
        }
        return v[rowIndex];
    }
};