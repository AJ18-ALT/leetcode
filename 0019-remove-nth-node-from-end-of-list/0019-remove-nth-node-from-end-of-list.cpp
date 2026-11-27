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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*prev=NULL;
        ListNode*temp=head;
        ListNode*curr=head;
        for(int i=0;i<n;i++){
            temp=temp->next;
        }
        if(temp==NULL) {
            return head->next;
        }
        while(temp!=NULL){
            prev=curr;
            curr=curr->next;
            temp=temp->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};