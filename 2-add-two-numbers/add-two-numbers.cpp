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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* temp1=l1,*temp2=l2,*temp,*res;
       while(temp1 && temp2){
        temp1=temp1->next;
        temp2=temp2->next;
       }
       if(temp1){
        temp=l1;
       }
       else{
        temp=l2;
       }
       res=temp;
       temp1=l1,temp2=l2;
       int carry=0,s;
       ListNode* prev=nullptr;
       while(temp1 && temp2){
        s=temp1->val+temp2->val+carry;
        temp->val=s%10;
        carry=s/10;
        prev=temp;
        temp=temp->next;
        temp1=temp1->next;
        temp2=temp2->next;
       }
       while(temp){
        s=temp->val+carry;
        temp->val=s%10;
        carry=s/10;
        prev=temp;
        temp=temp->next;
       }
       if(carry){
        ListNode* newnode=new ListNode(carry);
        if(prev)
        prev->next=newnode;
        else
        res->next=newnode;
       }
       //prev->next=newnode;
       return res;
    }
};