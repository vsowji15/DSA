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
        if(head==nullptr){
            return head;
        }
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        int rot=k%n;
        if(rot==0 || n==1){
            return head;
        }
        ListNode* shift;
        temp=head;
        while(temp && temp->next){
            n--;
            if(rot==n){
                shift=temp;
            }
            temp=temp->next;
        }
        temp->next=head;
        head=shift->next;
        shift->next=nullptr;
        return head;
    }
};