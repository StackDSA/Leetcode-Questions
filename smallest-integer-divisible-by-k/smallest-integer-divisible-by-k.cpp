class Solution {
    
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0) return -1;
        int count=1;
        int prem=1;
        while(prem%k!=0){
            int nrem=(prem*10+1)%k;
            count++;
            prem=nrem;
        }
        return count;
    }
};