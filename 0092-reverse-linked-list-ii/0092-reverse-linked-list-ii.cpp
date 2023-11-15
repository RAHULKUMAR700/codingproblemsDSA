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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> vec;
           ListNode* temp=head;
           int pos=1;
           while(temp!=NULL){
               if(pos<=right && pos>=left){
                   vec.push_back(temp->val);
                   cout<<temp->val<<"1"<<endl;
               }
               temp=temp->next;
               pos++;
           }
           temp=head;pos=1;
           int i=0;
           reverse(vec.begin(),vec.end());
           while(temp!=NULL){
               if(pos<=right && pos>=left){
                   temp->val=vec[i++];
                   cout<<temp->val<<"2"<<endl;
               }
               temp=temp->next;
               pos++;
           }
           return head;
    }
};