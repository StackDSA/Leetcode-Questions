class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int count=1,i=0;
        while( count <= n * n )
        	{
        		int j = i;
                    // four steps
        		while( j < n - i )             // 1. horizonal, left to right
        			v[i][j++] = count++;
        		j = i + 1;
        		while( j < n - i )             // 2. vertical, top to bottom
        			v[j++][n-i-1] = count++;   //we keep i constant and use j to travel spirally.
        		j = n - i - 2;
        		while( j > i )                  // 3. horizonal, right to left 
        			v[n-i-1][j--] = count++;
        		j = n - i - 1;
        		while( j > i )                  // 4. vertical, bottom to  top 
        			v[j--][i] = count++;
        		i++;      // next loop
        	}
        	return v;
    }
};