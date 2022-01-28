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
        if(!head||!head->next) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* ace=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                while(ace!=slow){
                    slow=slow->next;
                    ace=ace->next;
                }
                if(slow==ace) return ace;
            }
        }
        return NULL;
    }
};