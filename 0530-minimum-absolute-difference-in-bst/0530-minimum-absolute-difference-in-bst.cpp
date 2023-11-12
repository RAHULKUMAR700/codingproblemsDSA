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
    void traverse(TreeNode* root,vector<int> &inorder){
        if(root==NULL) return;
        traverse(root->left,inorder);
        inorder.push_back(root->val);
        traverse(root->right,inorder);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> inorder;
        traverse(root,inorder);
        int mini=INT_MAX;
        for(int i=inorder.size()-1;i>0;i--){
               inorder[i]-=inorder[i-1];
               mini=min(inorder[i],mini);
        }
          return mini;
    }
};