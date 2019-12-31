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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp;
        ListNode* new_node = new ListNode((l1->val + l2->val)%10);
        int carry = int((l1->val + l2->val)/10);
        temp = new_node;

        while(l1->next != NULL && l2->next != NULL){
            l1 = l1->next;
            l2 = l2->next;

            ListNode* temp_node = new ListNode((l1->val + l2->val + carry)%10);
            carry = int((l1->val + l2->val)/10);
            new_node->next = temp_node;
            new_node = new_node->next;
        }

        if(carry == 1){
            ListNode* temp_node = new ListNode(1);
            new_node->next = temp_node;
        }

     return temp;
    }


};
