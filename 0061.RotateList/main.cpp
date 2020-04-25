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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        ListNode* temp1 = head;
        ListNode* temp2;
        ListNode* temp3;
        int n = 1;
        while(head->next != NULL){
            head = head->next;
            n++;
        }
        temp3 = head;
        head = temp1;
        k = n - k%n;
        if(k == 0 || k == n) return head;

        int i = 0;
        while(true){
            if(i == k-1){
                temp2 = head->next;
                head->next = NULL;
                break;
            }
            head = head->next;
            i++;
        }
        head = temp1;
        temp3->next = head;
        head = temp2;


        return head;
    }
};
