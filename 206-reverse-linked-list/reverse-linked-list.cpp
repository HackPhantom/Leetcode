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
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        
        ListNode* temp = head;
        ListNode* prev = temp;
        ListNode* curr = temp;

        temp = temp->next;

        while (temp->next != nullptr)
        {
            curr = temp;
            temp = temp->next;
            curr->next = prev;
            prev = curr;
        }

        temp->next = curr;

        head->next = nullptr;

        return temp;
    }
};