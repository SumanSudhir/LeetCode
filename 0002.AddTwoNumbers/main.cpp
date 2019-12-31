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
        int v1,v2;

        while(l1->next != NULL || l2->next != NULL){

            if(l1->next == NULL){
                v1 = 0;
            }
            else{
                l1 = l1->next;
                v1 = l1->val;
            }

            if(l2->next == NULL){
                v2 = 0;
            }
            else{
                l2 = l2->next;
                v2 = l2->val;
            }

            ListNode* temp_node = new ListNode((v1 + v2 + carry)%10);
            carry = int((v1 + v2 + carry)/10);
            new_node->next = temp_node;
            new_node = new_node->next;
        }

        cout<<carry;
        if(carry == 1){
            ListNode* temp_node = new ListNode(1);
            new_node->next = temp_node;
        }

     return temp;
    }


};
