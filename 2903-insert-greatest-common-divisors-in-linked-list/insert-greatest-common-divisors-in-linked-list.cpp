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
    int gcd(int one,int two){
        return __gcd(one,two);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        while(temp->next){
            ListNode*pt=temp->next;
            int val1=temp->val;
            int val2=temp->next->val;
            ListNode*in=new ListNode(gcd(val1,val2));
            temp->next=in;
            in->next=pt;
            temp=in->next;
        }
        return head;
    }
};