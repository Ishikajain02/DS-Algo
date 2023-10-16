/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>l;
        ListNode*temp = head;
        int count =0;
        while(!temp){
             count++;
             temp=temp->next;
        }
        ListNode * prev = nullptr;
        if(k>=count){
            while(!head){
                prev = head;
                l.push_back(prev);
                head=head->next;
                prev->next = nullptr;
            }
            int n = k-count;
            while(n--){
                l.push_back(NULL);
            }
        }
        else{
            int f = count/k;
            int r = count%k;
          ListNode* bye = head;
           for(int i=0;i<k ;i++){
             ListNode* hey = bye;
             l.push_back(hey);
             for(int j=0;j<f+(r>0);j++){
                 hey = hey->next;
                 bye = hey;
             }
             hey->next=nullptr;
           }
        }
        return l;
    }
};*/
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result;
        int count = 0;
        ListNode* temp = head;
        
        while (temp) {
            count++;
            temp = temp->next;
        }
        
        int parts = count / k;
        int extra = count % k;
        temp = head;
        
        for (int i = 0; i < k; i++) {
            if(!temp){
               result.push_back(NULL);
               continue;
            }
            result.push_back(temp);
            
            int partSize = parts + (extra >0? 1 : 0);
            for (int j = 0; j < partSize - 1; j++) {
                temp = temp->next;
            }
            extra--;
            
            if (temp) {
                ListNode* next = temp->next;
                temp->next = nullptr;
                temp = next;
            }
        }
        
        return result;
    }
};