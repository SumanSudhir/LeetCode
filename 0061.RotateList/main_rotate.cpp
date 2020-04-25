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
        int n = 1;
        ListNode* newHead;
        newHead = head;

        while(head->next != NULL){
            head = head->next;
            n++;
        }
        k = n - k%n;

        if(k == 0 || k == n) return newHead;

        head->next = newHead;
        head = newHead;
        int i =1;
        while(i != k){
            head = head->next;
            i++;
        }

        newHead = head->next;
        head->next = NULL;

        return newHead;
    }
};
