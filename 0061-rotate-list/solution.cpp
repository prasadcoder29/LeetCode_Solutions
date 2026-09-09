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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head==NULL) return head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        k=k%count;
        
        temp=head;
        while(k!=0){
            temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            ListNode* a=temp->next;
            a->next=head;
            head=a;
            temp->next=NULL;
            k--;
        }
        return head;
    }
};
