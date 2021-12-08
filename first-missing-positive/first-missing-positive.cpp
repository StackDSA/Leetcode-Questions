class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //We have to place the elements in the vector 
        //at their respective indexes. For example, 1 @ index 0, 2 @ index 1, 3 @ index 2
        //and so on...then check which index and element isn't matching. That's the answer!
        int n=nums.size();
        for(int i = 0; i < n; ++ i)
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        
        for(int i = 0; i < n; ++ i)
            if(nums[i] != i + 1)
                return i + 1;
        
        return n + 1;
    }
};