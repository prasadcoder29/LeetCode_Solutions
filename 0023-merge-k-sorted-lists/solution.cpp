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
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* c= new ListNode(100);
        ListNode* temp3=c;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                ListNode* t=new ListNode(temp1->val);
                temp3->next=t;
                temp3=t;
                temp1=temp1->next;
            }
            else{
                ListNode* t=new ListNode(temp2->val);
                temp3->next=t;
                temp3=t;
                temp2=temp2->next;
            }
        }
        if(temp1==NULL) temp3->next=temp2;
        else temp3->next=temp1;
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a=lists[0];
            lists.erase(lists.begin());
            ListNode* b=lists[0];
            lists.erase(lists.begin());
            ListNode* c=merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};
