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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL){
            return l1;
        }
        else if(l1 == NULL && l2 != NULL){
            return l2;
        }
        else if(l1 != NULL && l2 == NULL){
            return l1;
        }

        ListNode* sorted = new ListNode(0);
        ListNode* head = sorted;
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                sorted->val = l1->val;
                l1 = l1->next;
            }
            else{
                sorted->val = l2->val;
                l2 = l2->next;
            }
            if(l1 != NULL || l2 != NULL){
                ListNode* temp = new ListNode(0);
                sorted->next = temp;
                sorted = sorted->next;
            }
        }

        while(l1 != NULL){
            sorted->val = l1->val;
            l1 = l1->next;
            if(l1 != NULL){
                ListNode* temp = new ListNode(0);
                sorted->next = temp;
                sorted = sorted->next;
            }
        }

        while(l2 != NULL){
            sorted->val = l2->val;
            l2 = l2->next;
            if(l2 != NULL){
                ListNode* temp = new ListNode(0);
                sorted->next = temp;
                sorted = sorted->next;
            }
        }

        return head;
    }
};
