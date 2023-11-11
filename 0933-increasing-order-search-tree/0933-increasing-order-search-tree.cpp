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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> inorder;
        traverse(root,inorder);
        int n=inorder.size();
        TreeNode* ansnode;
        TreeNode* temp;
        for(int i=0;i<n;i++){
            TreeNode* node= new TreeNode();
            if(i==0)
            { 
                ansnode=node;
                node->val=inorder[i];
                temp=node;
            }
            else{
                 temp->right=node;
                  node->val=inorder[i];
                  temp=temp->right;
            }
        }
        return ansnode;
    }
};