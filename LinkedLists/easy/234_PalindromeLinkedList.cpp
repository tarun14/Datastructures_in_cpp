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
    bool isPalindrome(ListNode* head) {

        if(!head){
            return true;
        }

        ListNode *ptr = head;
        int flag=1;
        vector <int>v;

        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        for(int i=0,j=v.size()-1; i<j;i++,j--){

            if(v[i]!=v[j]){
                flag=0;
                break;
            }
        }

        if(flag){
            return true;
        }else{
            return false;
        }

    }
};
