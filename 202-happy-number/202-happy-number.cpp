class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        else if(n>=0&&n<10&&n%2==0) return false;
        int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return isHappy(sum);
    }
};