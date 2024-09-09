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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>vc(m,vector<int>(n,-1));
        ListNode*temp=head;
        int start=0,end=m-1;
        int coll=0,cole=n-1;
        while(temp){
         for(int i=coll;i<=cole&& temp;i++){
           vc[start][i]=temp->val;
           temp=temp->next;
         }
         start++;
         for(int j=start;j<=end&& temp;j++){
            vc[j][cole]=temp->val;
            temp=temp->next;
         }
         cole--;
         for(int i=cole;i>=coll && temp;i--){
            vc[end][i]=temp->val;
            temp=temp->next;
         }
         end--;
         for(int i=end;i>=start&& temp;i--){
            vc[i][coll]=temp->val;
            temp=temp->next;
         }
         coll++;
        }
        return vc;
    }
};