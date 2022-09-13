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
        int count1=0;
        int count2=0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1!=NULL){
            count1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            count2++;
            temp2=temp2->next;
        }
        int dif = abs(count1-count2);
        
        temp1=headA;
        temp2=headB;
        
        if(count1>count2){
            while(dif--)temp1=temp1->next;
        }
        else{
             while(dif--)temp2=temp2->next;
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;

    }
};