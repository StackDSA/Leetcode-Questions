class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //This is right rotation. First I will rotate the whole array, then till k-1 and then from k to n.
        int n=nums.size();
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};