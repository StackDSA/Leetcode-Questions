class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2) return min(cost[0],cost[1]);
        int n=cost.size();
        int temp[n+1];
        int first=cost[0];
        int second=cost[1];
        for(int i=2;i<n;i++){
            temp[i]=cost[i]+min(first,second);
            first=second;
            second=temp[i];
        }
        return min(first,second);
    }
};