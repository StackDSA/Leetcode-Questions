class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        //Stupid mistake I made here. We just have to check whether the max and min values formed from the array "differences" lies within the range [lower, upper]. 
        long long mini=0,maxi=0,num=0, n=differences.size();
        for(long long i=0;i<n;i++){
            num+=differences[i];
            maxi=max(maxi,num);
            mini=min(mini,num);
        }
        int ans=1+(mini-lower)+(upper-maxi);
        return max(ans,0);
    }
};