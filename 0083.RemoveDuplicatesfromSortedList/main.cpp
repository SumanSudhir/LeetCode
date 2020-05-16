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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;
        ListNode* temp_last;
        ListNode* temp = head;


        while(temp->next != NULL){
            temp_last = temp;
            while(temp->next != NULL && temp->val == temp->next->val){
                temp = temp->next;
            }
            if(temp->next == NULL){
                temp_last->next = NULL;
                return head;
            }
            temp_last->next = temp->next;
            temp = temp->next;
        }

        return head;
    }
};
