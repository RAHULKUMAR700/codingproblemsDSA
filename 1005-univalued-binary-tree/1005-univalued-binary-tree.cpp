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
    void dfs(TreeNode* root,bool &flag,int k){
         if(root==NULL) return;
         if(root->val!=k) flag=false;
         dfs(root->left,flag,k);
         dfs(root->right,flag,k);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        int k=root->val;
        bool flag=true;
     dfs(root,flag,k);
       return flag;
    }
};