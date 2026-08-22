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
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            vector<int>temp;
            while(l--){
                TreeNode* curr=q.front();q.pop();
                temp.push_back(curr->val);
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
            }
            if(v.size()%2!=0){reverse(temp.begin(),temp.end());}
            v.push_back(temp);
        }

        return v;
    }
};