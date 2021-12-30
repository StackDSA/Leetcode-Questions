class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algo. Intuition: Since, majority element is undoubtedly present, we can say that if we keep a count and ele variables and change the value of ele whenever count becomes 0, we will get a majority element at the end.
        int count=0,ele,n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }
            else if(nums[i]==ele) count++;
            else count--;
        }
        return ele;
    }
};