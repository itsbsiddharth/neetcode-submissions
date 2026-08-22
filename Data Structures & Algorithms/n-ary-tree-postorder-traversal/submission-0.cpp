/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void f(Node* r, vector<int>& v){
        if(!r) return;
        for(auto c: r->children)f(c,v);
        v.push_back(r->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        f(root,ans);
        return ans;
    }
};