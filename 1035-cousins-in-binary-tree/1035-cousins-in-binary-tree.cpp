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
    void dfs(TreeNode* root,int x,int y,TreeNode* parent,int level,unordered_map<TreeNode*,pair<TreeNode*,int>>& mp){
        if(root==NULL) return;
           if(root->val==x||root->val==y){
               mp[root]={parent,level};
           }
        dfs(root->left,x,y,root,level+1,mp);
        dfs(root->right,x,y,root,level+1,mp);
    }
    // bool traverse(TreeNode* root, int x, int y,unordered_map<TreeNode*,TreeNode*>& mp)
    // {              
            
    // }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<TreeNode*,pair<TreeNode*,int>> mp;
        dfs(root,x,y,NULL,0,mp);
        vector<pair<TreeNode *,pair<TreeNode *, int>>> temp;
        for(auto it:mp){
               temp.push_back(it);
        }
        if((temp[0].second.first!=temp[1].second.first)&&(temp[0].second.second==temp[1].second.second)){
            return true;
        }
        return false;
    }
};