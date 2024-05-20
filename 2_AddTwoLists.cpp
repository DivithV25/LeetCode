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
        ListNode* head = new ListNode(0);
        ListNode *p1 = l1, *p2 = l2;
        ListNode* curr = head;
        int carry = 0;
        while (p1 != nullptr || p2 != nullptr) {
            int x = (p1 != nullptr) ? p1->val : 0;
            int y = (p2 != nullptr) ? p2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if (p1 != nullptr)
                p1 = p1->next;
            if (p2 != nullptr)
                p2 = p2->next;
        }
        if (carry > 0)
            curr->next = new ListNode(carry);
        return head->next;
    }
};