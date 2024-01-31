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
    ListNode* removeNodes(ListNode* head) {
         stack<int> stk;
        while (head){
            while (!stk.empty() && stk.top()< head->val){
                stk.pop();
            }
            stk.push(head->val);
            head= head->next;
        }
        if (stk.empty())return NULL;
        ListNode* nxt_node= new ListNode(stk.top());
        ListNode* new_head= new ListNode(stk.top());
        stk.pop();
        while (!stk.empty()){
            new_head= new ListNode(stk.top());
            new_head->next= nxt_node;
            nxt_node= new_head;
            stk.pop();
        }
        return new_head;
    }
};