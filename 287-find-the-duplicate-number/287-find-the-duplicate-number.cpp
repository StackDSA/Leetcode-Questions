class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Two pointers can be used here since we have a guarantee that only one element is repeated.
        // There will come a point when slow will be equal to fast because fast and slow pointers cannot assume any 
        // value other than [1,n]. When fast==slow, we can break the loop and return slow/fast.
        int fast=nums[0],slow=nums[0];
        do{
            fast=nums[nums[fast]];
            slow=nums[slow];
        }while(fast!=slow);
        fast=nums[0];
        while(fast!=slow){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
    }
};