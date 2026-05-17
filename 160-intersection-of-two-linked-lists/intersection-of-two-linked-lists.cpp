/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>mp;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=nullptr){
            mp[temp1]++;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            mp[temp2]++;
            temp2=temp2->next;
        }
        for(auto p:mp){
            if(p.second==2){
                 return p.first;
            }
        }
        return nullptr;
    }
};