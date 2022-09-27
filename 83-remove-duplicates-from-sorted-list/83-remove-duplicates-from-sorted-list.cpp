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
    void solve(ListNode* head){
        
        
        ListNode* curr = head;
        ListNode* fur = head->next;
        while(curr!=NULL and fur!=NULL){
           if(curr->val == fur->val) 
           {
               curr->next=fur->next;
               fur=fur->next;
           }
            else
            {
                
                curr=fur;
                fur=fur->next;
            }
        }
        
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        solve(head);
        return head;
        
    }
};