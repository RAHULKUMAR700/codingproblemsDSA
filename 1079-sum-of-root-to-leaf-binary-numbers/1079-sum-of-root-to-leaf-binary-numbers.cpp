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
    void traverse(TreeNode* root,int &sum,int &mastersum){
        sum=2*sum+root->val;
        if(root->left==NULL && root->right==NULL) mastersum+=sum;
        if(root->left!=NULL)traverse(root->left,sum,mastersum);
        if(root->right!=NULL)traverse(root->right,sum,mastersum);
        sum=(sum-root->val)/2;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int sum=0,mastersum=0;
        traverse(root,sum,mastersum);
        return mastersum;
    }
};