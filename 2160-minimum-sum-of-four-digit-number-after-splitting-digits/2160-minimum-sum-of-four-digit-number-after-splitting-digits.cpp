class Solution {
public:
    int minimumSum(int num) {
        string nums=to_string(num);
        sort(nums.begin(),nums.end());
        int i=0, n=nums.length(), num1=0, num2=0;
        while(i<n&&nums[i]==0) i++;
        num1=(nums[i]-'0');
        i++;
        if(i==n-1) return num1;
        if(i<n){
            num2=(nums[i]-'0');
            i++;    
        } 
        if(i<n){
          num1*=10;
          num1+=(nums[i]-'0');
          i++;  
        } 
        if(i<n){
          num2*=10;
          num2+=(nums[i]-'0');
          i++;
        }
        return num1+num2;
    }
};