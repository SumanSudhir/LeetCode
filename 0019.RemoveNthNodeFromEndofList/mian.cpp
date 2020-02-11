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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int num = 0;
        while(head !=NULL){
            num++;
            head = head->next;
        }
        n = num-n+1;
        head = temp;
        if(n==1){
            head = head->next;
            return head;
        }

        int count = 1;
        while(count<n){
            if(count == n-1){
                head->next = head->next->next;
            }

            head = head->next;
            count++;
        }
        return temp;
    }
};
