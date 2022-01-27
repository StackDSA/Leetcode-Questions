class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
        //Alternate Method:
        // vector<int> res(A.size());
        // int l = 0, r = A.size() - 1;
        // int left, right;
        // int pos = A.size() - 1;
        // while (l <= r){
        //     left = abs(A[l]);
        //     right = abs(A[r]);
        //     if (left > right){
        //         res[pos] = pow(A[l], 2);
        //         l++;
        //     }
        //     else{
        //         res[pos] = pow(A[r], 2);
        //         r--;
        //     }
        //     pos--;
        // }
        // return res; 
    }
};