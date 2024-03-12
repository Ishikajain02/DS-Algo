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
    ListNode* removeZeroSumSublists(ListNode* head) {
             unordered_map<int,ListNode*>mp;
             ListNode* temp=new ListNode(0,head);
             ListNode*h=temp;
             int prefixsum=0;
             while(h){
                prefixsum+=h->val;
                mp[prefixsum]=h;
                h=h->next;

                
             }
             prefixsum=0;
             ListNode*ptr=temp;
             while(ptr){
                prefixsum+=ptr->val;
                ptr->next=mp[prefixsum]->next;
                ptr=ptr->next;
             }
             return temp->next;
    }
};