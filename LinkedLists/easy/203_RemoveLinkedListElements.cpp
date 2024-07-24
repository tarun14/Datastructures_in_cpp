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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return head;
        }
        
        /*if(head->val == val){
            head->next = NULL;
            return head;
        }*/

        ListNode *curr, *prev;

        prev = head;
        curr = head;

        while(curr!=NULL){
            if(curr->val == val){

                if(prev == curr){
                    curr = curr->next;
                    prev = curr;
                    head = curr;
                }else{
                    prev->next = curr->next;
                    curr = curr->next;
                }
                
            }else{
                prev = curr;
                curr = curr->next;
            }
        }


        return head;
    }
};
