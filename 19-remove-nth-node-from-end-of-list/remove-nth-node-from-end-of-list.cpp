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
        ListNode* temp=head;
        int tot=0;
        while(temp){
            tot++;
            temp=temp->next;
        }
        if(tot-n==0){
            head=head->next;
            return head;
        }
        temp=head;
        int cnt=0;
        while(temp!=nullptr){
              cnt++;
              if(cnt==tot-n){
                temp->next=temp->next->next;
                break;
              }
              temp=temp->next;
        }
        return head;
    }
};