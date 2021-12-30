class Solution {
public:
    int numTrees(int n) {
        //Catalan Number. DP solution is also present. This is more elegant. 
        long long ans = 1;
        for (int i = 0; i < n; ++i) 
          ans = 2 * (2 * i + 1) * ans / (i + 2);
        return (int) ans;
    }
};