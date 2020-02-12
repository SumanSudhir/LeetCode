/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    void swap(ListNode* head){
        int x = head->val;
        head->val = head->next->val;
        head->next->val = x;
    }
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(head !=NULL){
            if(count%2 == 0 && head->next !=NULL){
                swap(head);
            }
            head = head->next;
            count++;
        }
        return temp;
    }
};
