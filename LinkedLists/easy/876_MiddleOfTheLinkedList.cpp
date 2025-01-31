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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count=0,middle=0;

        do{
            count++;
            temp = temp->next;
        }while(temp != NULL);

        middle = count/2;

        int i=0;
        temp = head;
        
        while(i!=middle){
            temp = temp->next;
            i++;
        }

        return temp;
    }
};
