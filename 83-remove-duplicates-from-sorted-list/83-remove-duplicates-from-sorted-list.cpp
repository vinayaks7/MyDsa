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

    
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr=head;
    ListNode* temp=new ListNode(-1);
    temp->next=ptr;
    while(ptr!=NULL && ptr->next!=NULL){
        if(ptr->val==ptr->next->val){
            ptr->next=ptr->next->next;
        }
        else ptr=ptr->next;
    }
    return temp->next;
        
    }
};