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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
       ListNode *temp=head;
        while(temp){
            ListNode *t=temp;
           bool h=true;
            while(t){
                if(t->val>temp->val){
                    ans.push_back(t->val);
                    h=false;
                    break;
                    
                }
                else t=t->next;
            }
            if(h)ans.push_back(0);
            temp=temp->next;
        }
        return ans;
    }
};