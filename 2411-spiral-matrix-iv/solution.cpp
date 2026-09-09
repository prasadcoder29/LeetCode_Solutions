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
        vector<vector<int>> v(m,vector<int>(n));
        ListNode* temp=head;
        int minr=0,minc=0,maxr=m-1,maxc=n-1,count=0;
        while(minr<=maxr&&minc<=maxc){
            if(count!=m*n){
                for(int j=minc;j<=maxc;j++){
                if(temp!=NULL){
                    v[minr][j]=temp-> val;
                    temp=temp->next;
                    count++;
                }
                else {
                    v[minr][j]
=-1;
                    count++;
                }
                }
            minr++;
            }
            if(count!=m*n){
                for(int j=minr;j<=maxr;j++){
                if(temp!=NULL){
                    v[j][maxc]=temp-> val;
                    temp=temp->next;
                    count++;
                }
                else {
                    v[j][maxc]
=-1;
                    count++;}
                }
            maxc--;
            }
            if(count!=m*n){
                for(int j=maxc;j>=minc;j--){
                if(temp!=NULL){
                    v[maxr][j]=temp-> val;
                    temp=temp->next;
                    count++;
                }
                else {
                    v[maxr][j]
=-1;
                    count++;}
                }
            maxr--;
            }
            if(count!=m*n){
                for(int j=maxr;j>=minr;j--){
                if(temp!=NULL){
                    v[j][minc]=temp-> val;
                    temp=temp->next;
                    count++;
                }
                else {
                    v[j][minc]
=-1;
                    count++;
                }
                }
            minc++;
            }
        }
        return v;
        }
    
};
