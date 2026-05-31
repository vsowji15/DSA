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
          if(head==nullptr || head->next==nullptr){
            return head;
          }
          int n=0;
          ListNode* temp=head,*prev,*curr=head,*nxt=head,*tem;
          while(temp!=nullptr){
            n++;
            if(n==left-1){
               curr=temp->next;
               nxt=temp->next;
               tem=temp;
            }
            if(n==right){
                prev=temp->next;
                break;
            }
            temp=temp->next;
          }
          ListNode* _prev=prev;
        while(curr!=_prev){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        if(left!=1){
            tem->next=prev;
        }
        else{
            head=prev;
        }
        return head;
    }
};