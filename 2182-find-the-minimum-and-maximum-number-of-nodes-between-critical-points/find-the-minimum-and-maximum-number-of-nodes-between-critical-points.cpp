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
int fn(ListNode*head){
    ListNode*temp=head;
    int size=0;
    while(temp){
     size++;
     temp=temp->next;
    }
    return size;
}
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
     int localmini=INT_MAX,localmaxi=INT_MAX;
     ListNode* temp=head;
    // vector<int>ans;
     int size=fn(head);
     int cnt=1;
     int firstmini=-1;
     if(size==2)return {-1,-1};
     temp=temp->next;
     ListNode*prev=head;
     int prevnode=-1;
     //int curr=-1;
     while(temp&& temp->next){
        cnt++;
      if(temp->val>prev->val && temp->val>temp->next->val){
        if(firstmini==-1){
            firstmini=cnt;
            prevnode=firstmini;
        }
        else{
          localmini=min(localmini,cnt-prevnode);
          prevnode=cnt;
        }
        
      }
      else if(temp->val<prev->val && temp->val<temp->next->val){
        if(firstmini==-1){
             firstmini=cnt;
            prevnode=firstmini;
        }
        //ans.push_back(cnt);
         else{
          localmini=min(localmini,cnt-prevnode);
          prevnode=cnt;
        }
      }
      temp=temp->next;
      prev=prev->next;
     }   
     //if(size<2)return {-1,-1};
 
    localmaxi=prevnode-firstmini;
       if(localmini==INT_MAX || localmaxi==INT_MIN)return {-1,-1};
    return {localmini,localmaxi};
    }
};