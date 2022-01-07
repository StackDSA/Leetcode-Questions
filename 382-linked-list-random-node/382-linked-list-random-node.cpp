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
    // I have absolutely no clue on how to solve these type of problems in which we have to implement a class. I understand how t implement it. But, for example the random function requires random...how to implement that?
    //Anyways, I read a solution. The first one on the Pinned comment. Understood some of that. So, I implemneted that here.
    ListNode* head;
public:
    Solution(ListNode* head) {
        this->head=head;
    }
    
    int getRandom() {
        int ans=0,i=1;
        ListNode* p=this->head;
        while(p){
            if(rand()%i==0) ans=p->val;
            i++;
            p=p->next;
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */