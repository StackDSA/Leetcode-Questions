class Solution {
public:
    int mySqrt(int n) {
        long long i=0;
        while(i*i<=n){
            if(i*i==n) return i;
            i++;
        }
        return i-1;
    }
};