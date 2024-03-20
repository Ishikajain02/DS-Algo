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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=1;
        ListNode* temp=list1;

        while(temp && count!=a){
            count++;
            temp=temp->next;
        }
     ListNode*temp2=list1;
     int cnt=0;
     while(temp2 && cnt!=b+1){
        cnt++;
        temp2=temp2->next;
     }
     temp->next=list2;
     while(list2->next!=NULL){
        list2=list2->next;
     }
     list2->next=temp2;
     return list1;
    }
};