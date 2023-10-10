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
    ListNode* mergeNodes(ListNode* head) {
        int count =0;
        ListNode* temp = head;
        ListNode*temp2=head;
        queue<int>q;
        while(temp!=NULL){
         if(temp->val==0 && count>0){
            q.push(count);
            count =0;
        }
        else{
            count+=temp->val;
        }
        temp= temp->next;
        }
        int n= q.size();
        while(!q.empty()){
             if(q.size()==1){
              temp2->val=q.front();
              q.pop();
              temp2->next = nullptr;
          }
          else{
           temp2->val= q.front();
          q.pop();
          temp2=temp2->next;
         
          }
          
        }
       
        return head;

/*int count =0;
while(temp!=NULL){
    if(temp->val==0){
        count =0;

    }
    else{
        count+= temp->val;
    }
}*/
        
    }
};