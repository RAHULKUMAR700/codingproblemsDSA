/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    Node* duplicate(Node* &head){
        Node* curr=head;
        while(curr!=NULL){
            Node* temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        while(curr!=NULL){
            if(curr->next!=NULL){
                curr->next->random=(curr->random!=NULL)?curr->random->next:NULL;
            }
            curr=curr->next->next;
        }
        Node* orig=head;
        Node* copy=head->next;
        Node* temp=copy;
        while(orig!=NULL){
            orig->next=orig->next->next;
            if(copy->next && copy->next->next)copy->next=copy->next->next;
            orig=orig->next;
            copy=copy->next;
        }
        return temp;
    }
    
    
public:
    Node* copyRandomList(Node* head)
    {  if(head==NULL) return NULL;
        return duplicate(head);
    
    }
};