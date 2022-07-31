class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<char>>& grid){
        if(i<0||i==n) return;
        if(j<0||j==m) return;
        if(grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0'; //instead of using a visitedarray,we erase the islands we get.   
        dfs(i+1,j,n,m,grid);
        dfs(i,j+1,n,m,grid);
        dfs(i-1,j,n,m,grid);
        dfs(i,j-1,n,m,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        //Similar question to no. of disconnected components. Can be solved using DFS.
        int n=grid.size(), m=grid[0].size(), count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return count;
    }
};