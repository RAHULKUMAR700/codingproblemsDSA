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
    void traverse(TreeNode* root,vector<int> &arr){
        if(root==NULL) return;
        traverse(root->left,arr);
        
        if(root->left==NULL && root->right==NULL) arr.push_back(root->val);

        traverse(root->right,arr);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> order1,order2;
        traverse(root1,order1);
        traverse(root2,order2);
        if(order1==order2) return true;
         return false;
    }
};