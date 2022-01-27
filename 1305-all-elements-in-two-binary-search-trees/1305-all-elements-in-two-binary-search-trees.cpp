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
    void merge(vector<int>v1,vector<int>v2,vector<int>&v){
        int i=0,j=0,n=v1.size(),m=v2.size();
        while(i<n&&j<m){
            if(v1[i]<v2[j]){
                v.push_back(v1[i]);
                i++;
            }
            else if(v1[i]>v2[j]){
                v.push_back(v2[j]);
                j++;
            }
            else{
                v.push_back(v1[i]);
                i++;
                v.push_back(v2[j]);
                j++;
            }
        }
        while(i<n){
            v.push_back(v1[i]);
            i++;
        }
        while(j<m){
            v.push_back(v2[j]);
            j++;
        }
    }
public:
    void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2,v;
        inorder(root1,v1);
        inorder(root2,v2);
        merge(v1,v2,v);
        return v;
    }
};