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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) 
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *entry=head;
        slow=slow->next;
        fast=fast->next->next;
        
        while(fast!=NULL && fast->next!=NULL){
               if(slow == fast) {
            while(slow != entry) {
                slow = slow->next;
                entry = entry->next;
            } return slow;
        }
            slow = slow->next;
        fast = fast->next->next;
    }
        return NULL;
    }
};