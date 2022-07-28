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
        // Followed solution from a YT video. Implemented on my own. Intuition is key. After we detect a cycle, we increment the ace and slow pointers till they meet. When they meet, we return the slow/ ace pointer. Proof is in the video. 
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