//Problem: Remove all nodes containing a specified value from a singly linked list and return the updated head.
//Solution: Create a dummy node before the head and traverse the list using a current pointer.
//If the next node contains the target value, bypass it using pointer manipulation; otherwise, advance the pointer.

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
    ListNode* removeElements(ListNode* head, int val) {
         ListNode dummy(0);
        dummy.next = head;

        ListNode* current = &dummy;

        while (current->next != nullptr) {

            if (current->next->val == val) {
                current->next = current->next->next;
            }
            else {
                current = current->next;
            }
        }

        return dummy.next;
    }
};
