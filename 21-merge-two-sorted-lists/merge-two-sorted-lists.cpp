/**
 * Definition for singly-linked list.
 * struct ListNode {[] *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         if(list2==nullptr){
            return list1;
         }
         if(list1==nullptr){
            return list2;
         }
         ListNode* prev1=nullptr,*prev2=list2,*temp1=list1,*temp2=list2;
         while(temp1 && temp2){
            if(temp1->val<=temp2->val){
                prev1=temp1;
                temp1=temp1->next;
            }
            else{
                if(!prev1){
                    list1=temp2;
                }
                else{
                    prev1->next=temp2;
                }
                prev1=temp2;
                temp2=temp2->next;
                prev2->next=temp1;
                if(temp2){
                    prev2=temp2;
                }
            }
         }
         if(temp1){
            prev2->next=temp1;
         }
         if(temp2){
            prev1->next=temp2;
         }
         return list1;
    }
};