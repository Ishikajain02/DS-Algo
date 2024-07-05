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
     vector<int>ans;
     int size=fn(head);
     int cnt=1;
     if(size==2)return {-1,-1};
     temp=temp->next;
     ListNode*prev=head;
     while(temp&& temp->next){
        cnt++;
      if(temp->val>prev->val && temp->val>temp->next->val){
        ans.push_back(cnt);
        
      }
      else if(temp->val<prev->val && temp->val<temp->next->val){
        ans.push_back(cnt);
      }
      temp=temp->next;
      prev=prev->next;
     }   
     if(ans.size()<2)return {-1,-1};
     localmaxi=ans[ans.size()-1]-ans[0];
    for(int i=0;i<ans.size()-1;i++){
        localmini=min(localmini,ans[i+1]-ans[i]);
    }
    return {localmini,localmaxi};
    }
};