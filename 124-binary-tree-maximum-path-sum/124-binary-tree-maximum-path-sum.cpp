/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int solve(TreeNode* root, int& maxi){
        if(!root) return 0;
        int ls=solve(root->left,maxi);
        int rs=solve(root->right,maxi);
        int temp = max(max(ls,rs)+root->val,root->val);
        int ans = max(temp,ls+rs+root->val);
        maxi = max(maxi,ans);
        return temp;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
    }
};