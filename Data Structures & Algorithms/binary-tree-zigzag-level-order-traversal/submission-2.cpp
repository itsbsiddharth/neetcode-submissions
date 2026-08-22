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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>v;
        if(root==nullptr) return v;

        bool ltor=true;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            vector<int>temp(l,0);
            for(int i=0;i<l;i++){
                TreeNode* curr=q.front();q.pop();
                int idx = (ltor ? i : l-i-1);
                temp[idx]=curr->val;
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
            }
            ltor=!ltor;
            v.push_back(temp);
        }

        return v;
    }
};