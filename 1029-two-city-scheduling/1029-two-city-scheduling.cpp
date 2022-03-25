class Solution {
public:
    // I have to sort the vector of vectors such that I get exactly n/2 smallest costs to travel to A and exactly n/2 smallest costs to travel to B. I can do this by sorting according to the differences in travelling to A vs B. 
    // We travel to A for the smallest n/2 differences and for the rest, we travel to B.
    int twoCitySchedCost(vector<vector<int>>& costs) {
        if(costs.size()==2) return min(costs[0][0],costs[1][0])+min(costs[1][1],costs[0][1]);
        int sum=0;
        sort(begin(costs), end(costs), [](vector<int> &v1, vector<int> &v2) {
            return (v1[0] - v1[1] < v2[0] - v2[1]);
        });
        for (auto i = 0; i < costs.size() / 2; ++i) {
            sum += costs[i][0] + costs[i + costs.size() / 2][1];
        }
        return sum;
    }
};