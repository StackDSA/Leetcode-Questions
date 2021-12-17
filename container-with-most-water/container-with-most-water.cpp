class Solution {
public:
    int maxArea(vector<int>& height) {
        //Have to find maximum of (j-i)*(height[j]-height[i]) but O(n^2) solution gives TLE.
        //We have to use 2-pointer approach.
        int maxAmount=0,i=0,j=height.size()-1;
        while(i<j){
            int minHeight=min(height[i],height[j]);
            maxAmount=max(maxAmount,minHeight*abs(j-i));
            while(height[i]<=minHeight&&i<j) i++;
            while(height[j]<=minHeight&&i<j) j--;
        }
        return maxAmount;
    }
};