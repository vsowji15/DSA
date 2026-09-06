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
    int solve(ListNode* head){
        int cnt=0,ans=0;
        ListNode* temp=head;
        while(temp){
            if(temp->val==1){
                ans+=pow(2,cnt);
            }
            cnt++;
            temp=temp->next;
        }
        return ans;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* prev=nullptr,*curr=head,*nxt=head;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head=prev;
        return solve(head);
    }
};