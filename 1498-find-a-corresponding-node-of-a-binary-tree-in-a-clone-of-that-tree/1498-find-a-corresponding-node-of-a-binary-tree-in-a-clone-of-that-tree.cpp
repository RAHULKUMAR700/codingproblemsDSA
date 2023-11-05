/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
   void traverse(TreeNode* cloned,TreeNode* target,TreeNode* &targetcloned){
       if(cloned==NULL) return;
       if(cloned->val==target->val){
        targetcloned=cloned;
       }
       traverse(cloned->left,target,targetcloned);
       traverse(cloned->right,target,targetcloned);
   }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
         TreeNode* targetcloned;
         traverse(cloned,target,targetcloned);
         return targetcloned;
    }
};