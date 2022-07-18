class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(),carry=1;
        for(int i=n-1;i>=0;i--){
            if(carry==1&&digits[i]==9){
                digits[i]=0;
            }
            else if(carry==1){
                digits[i]++;
                carry--;
            }
        }
        if(carry==1) digits.insert(digits.begin(),1);
        return digits;
    }
};