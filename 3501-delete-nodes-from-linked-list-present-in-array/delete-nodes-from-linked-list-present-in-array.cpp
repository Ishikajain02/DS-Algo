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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>s;
        for(int i=0;i<nums.size();i++)s.insert(nums[i]);
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp){
            if(s.find(temp->val)==s.end()){
                if(prev==NULL){
                    head=temp;
                    prev=head;
                   
                }
                else {
                    if(s.find(temp->val)==s.end()){
                    prev->next=temp;
                    prev=temp;
                 
                    }
                    
                }
            }
            temp=temp->next;
        }

        prev->next=nullptr;
        return head;
    }
};