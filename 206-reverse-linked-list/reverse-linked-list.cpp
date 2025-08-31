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
    ListNode* reverseList(ListNode* head) {
        stack<pair<int,ListNode*>>st;
        int size=0;
        ListNode * temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        int val=size/2;
      //  if(size%2!=0)val++;
       temp=head;
        int cnt=0;
        while(temp ){
           
            cnt++;
            
             if(cnt>=val){
                st.push({temp->val,temp});
            }
            temp=temp->next;
        }
    temp=head;
    int num=0;
        
        while(num < val  &&temp && !st.empty()){
            int od=temp->val;
            num++;
           temp->val=st.top().first;
           cout<<temp->val<<" "<<num<<endl;
           st.top().second->val=od;
           st.pop();
           temp=temp->next;

        }
        return head;
    }
};