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
    bool hasCycle(ListNode *head) {
        
        ListNode *slowptr = head, *fastptr=head;

        while((fastptr != NULL)&&(fastptr->next != NULL)){
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;

            if(slowptr == fastptr)
                return true;
        }
        
        return false;
    }
};
