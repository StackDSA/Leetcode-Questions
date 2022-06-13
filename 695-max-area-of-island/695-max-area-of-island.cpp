class Solution {
        void dfs(int i, int j, int n, int m, vector<vector<int>>& grid, int &count){
            if(i<0||i==n) return;
            if(j<0||j==m) return;
            if(grid[i][j]==0){
                return;
            }
            grid[i][j]=0; //instead of using a visited array, we erase the islands we get.
            count++;
            dfs(i+1,j,n,m,grid, count);
            dfs(i,j+1,n,m,grid, count);
            dfs(i-1,j,n,m,grid, count);
            dfs(i,j-1,n,m,grid, count);
        }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), maxCount=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int count=0;
                    dfs(i,j,n,m,grid, count);
                    maxCount=max(count, maxCount);
                }
            }
        }
        return maxCount;
    }
};