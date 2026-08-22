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
public:
    void traverse(TreeNode* node, int &k, int& ans){
        if(node==nullptr || k==0)return;


        traverse(node->left,k,ans);

        k--;if(k==0){ans=node->val;return;}
        
        traverse(node->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ct=0,ans=-1;
        traverse(root,k,ans);
        return ans;
    }
};
