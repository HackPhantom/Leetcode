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
    void deleteNode(ListNode* node) {

        ListNode *temp = node;
        ListNode *prev = node;
        ListNode *curr = node;


        while (curr -> next != NULL)
        {
            curr = curr ->next;
            prev->val = curr->val;
            temp = prev;
            prev = curr;
        }

        temp -> next = NULL;
        
    }
};