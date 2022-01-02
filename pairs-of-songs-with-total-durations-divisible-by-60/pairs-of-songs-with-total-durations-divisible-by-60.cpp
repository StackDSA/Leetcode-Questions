class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0,n=time.size();
        int hash[60]={0};
        for(int i=0;i<n;i++)
        {
            int a=time[i]%60;
            if(a==0)
                count+=hash[0];
            else
                count+=hash[60-a];
            hash[a]++;
        }
        return count;
    }
};