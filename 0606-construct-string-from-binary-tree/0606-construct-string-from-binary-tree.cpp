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
    void traverse(TreeNode* root,string& ans,bool flag){
        if(root==NULL){
           if(flag) ans+="()"; 
            return;
        }
        ans+='(';
        ans+=to_string(root->val);
        traverse(root->left,ans,root->right!=NULL);
        traverse(root->right,ans,false);
        ans+=')';
    }
public:
    string tree2str(TreeNode* root) {
        string ans;
        bool flag=false;
        traverse(root,ans,flag);
        ans=ans.substr(1,ans.size()-2);
        return ans;
    }
};