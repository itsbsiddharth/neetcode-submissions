/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        vector<int>v,rv;
        while(curr!=nullptr){
            v.push_back(curr->val);
            curr=curr->next;
        }
        rv=v;
        reverse(v.begin(),v.end());
        return v==rv;
        
    }
};