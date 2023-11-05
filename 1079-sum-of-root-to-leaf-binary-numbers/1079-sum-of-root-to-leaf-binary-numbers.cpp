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
        if(root==NULL)return;
        
        sum=2*sum+root->val;
        cout<<sum<<endl;
        if(root->left==NULL && root->right==NULL){
            mastersum+=sum;
        cout<<"//"<<mastersum<<endl;
        }
        if(root->left!=NULL)traverse(root->left,sum,mastersum);
        cout<<sum<<endl;
        if(root->right!=NULL)traverse(root->right,sum,mastersum);
        sum=(sum-root->val)/2;
        cout<<sum<<endl;
        
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        int mastersum=0;
        traverse(root,sum,mastersum);
        return mastersum;
    }
};