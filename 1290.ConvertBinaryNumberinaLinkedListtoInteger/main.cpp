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
    int getDecimalValue(ListNode* head) {

        ListNode* temp = head;
        int n = 0;

        while(temp != NULL){
            n++;
            temp = temp->next;
        }

        temp = head;
        int output = 0;

        while(temp != NULL){
            output += temp->val*pow(2,n-1);
            n--;
            temp = temp->next;
        }

        return output;
    }
};
