class Solution {
    //Tried this one for a long time. Couldn't get the answer so decided to chekc the solutions and guess what? The solution was also incorrect. It works...but if we are asked to give the index of the numbes, it fails as seen in the comments. 
    // Referred this-https://leetcode.com/problems/increasing-triplet-subsequence/discuss/78993/Clean-and-short-with-comments-C%2B%2B. Check out the comments o understand why it isn't the best solution
    //He has abandoned the need for var count. There is also an alternate solution using Longest increasing subsequence but I can't understand that solution at this point of time because I haven't done DP.
public:
    bool increasingTriplet(vector<int>& nums) {
        int mini=INT_MAX,j=0,count=0,pmini=INT_MAX;
        while(j<nums.size()){
            if(mini>=nums[j]){
                mini=nums[j];
            }
            else if(pmini>=nums[j]){
                pmini=nums[j];
            }
            else {
                return true;
            }
            j++;
        }
        return false;
    }
};