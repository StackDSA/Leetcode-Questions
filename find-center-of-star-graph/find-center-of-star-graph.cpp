class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        //just looking to see which node appears in the first two edges.
        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
    }
};