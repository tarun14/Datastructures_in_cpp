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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp3,*temp4;

        //If any of the list is empty
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }

        if(list1->val < list2->val){
            temp4 = list1;
            list1 = list1->next;
        }else{
            temp4 = list2;
            list2 = list2->next;
        }
        
        temp3 = temp4;

        while(list1&&list2){
            if(list1->val < list2->val){
                temp3->next = list1;
                list1 = list1->next;
            }else{
                temp3->next = list2;
                list2 = list2->next;
            }
            temp3 = temp3->next;
        }


        if(list1 == NULL){
            temp3->next = list2;
        }else{
            temp3->next = list1;
        }
        
        return temp4;
    }
};
