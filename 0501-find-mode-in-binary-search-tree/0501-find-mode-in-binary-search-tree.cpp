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
                   void preordertrav(TreeNode* root,vector<int> &trav) {
                       if(root==NULL){
                           return;
                       }
                       trav.push_back(root->val);
                       preordertrav(root->left,trav);
                       preordertrav(root->right,trav);
                   } 
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> trav,ans;
        set<int> ans1;
        preordertrav(root,trav);
        unordered_map<int,int> mp;
        int maxi=INT_MIN;
        for(auto it:trav){
            mp[it]++;
            maxi=max(maxi,mp[it]);
        }
        for(auto it:trav){
            if(mp[it]==maxi){
                ans1.insert(it);
            }
        }
        for(auto it:ans1){
            ans.push_back(it);
        }
        return ans;

    }
};