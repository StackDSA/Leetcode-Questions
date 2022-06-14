class Solution {
    int lcs(int m, int n, string word1, string word2){
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0) dp[i][j]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(word1[i-1]==word2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
    }
public:
    int minDistance(string word1, string word2) {
        //Simple variation of LCS.
        // Don't know how to implement in vectors but read the solution and implemented on my own
        int m=word1.length(), n=word2.length();
        return m+n-2*lcs(m,n,word1,word2);
    }
};