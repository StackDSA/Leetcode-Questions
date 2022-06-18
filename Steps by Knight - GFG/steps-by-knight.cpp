// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
   int dx[8]={-1,-1,1,1,-2,-2,2,2};
   int dy[8]={-2,2,-2,2,-1,1,-1,1};
   bool isvalid(int x,int y,int n)
   {
       if(x<1||x>n||y<1||y>n)
       return false;
       else
       return true;
   }
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	        queue<vector<int>>q;
    q.push({KnightPos[0],KnightPos[1],0});
    vector<vector<int>>visited(N+1,vector<int>(N+1,0));
    visited[KnightPos[0]][KnightPos[1]]=1;
    while(!q.empty())
    {
        vector<int> curr=q.front();
        int curr_x=curr[0];
        int curr_y=curr[1];
        int curr_d=curr[2];
        q.pop();
        if(curr_x==TargetPos[0]&&curr_y==TargetPos[1])
        return curr_d;
        for(int i=0;i<8;i++)
        {
            int new_x=curr_x+dx[i];
            int new_y=curr_y+dy[i];
            if(isvalid(new_x,new_y,N)&&visited[new_x][new_y]==0)
            {
                visited[new_x][new_y]=1;
                q.push({new_x,new_y,curr_d+1});
            }
        }
        
    }
     return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends