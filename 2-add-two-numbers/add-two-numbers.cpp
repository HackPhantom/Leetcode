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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int num = l1->val + l2->val;
        int carry = 0;

        if (num > 9)
        {
            num = num % 10;
            carry = 1;
        }

        ListNode* node = new ListNode(num);

        ListNode * head = node;

        ListNode * temp = head;

        
        while (l1->next != nullptr && l2->next != nullptr)
        {
            l1 = l1 -> next;
            l2 = l2 -> next;

            num = l1->val +l2->val + carry;

            if (num > 9)
            {
                num = num % 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }

            node =  new ListNode(num);
            temp -> next  = node;
            temp = temp->next;

        }
        if (l1->next == nullptr && l2-> next != nullptr)
        {
            while(l2->next != nullptr)
            {
                l2 = l2->next;

                num = l2->val + carry;

                if (num > 9)
                {
                    num = num % 10;
                    carry = 1;
                }
                else 
                {
                    carry = 0;
                }
                temp->next = new ListNode(num);
                temp = temp->next;
            }
        }
        else if (l2->next == nullptr && l1->next != nullptr)
        {
            while(l1->next != nullptr)
            {
                l1 = l1->next;

                num = l1->val + carry;

                if (num > 9)
                {
                    num = num % 10;
                    carry = 1;
                }
                else 
                {
                    carry = 0;
                }
                temp->next = new ListNode(num);
                temp = temp->next;
            }

        }

        if (carry == 1)
        {
            temp -> next = new ListNode(1);
        }

        return head;
        

        
    }
};