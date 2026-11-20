//Problem: Determine whether a singly linked list contains a cycle, where a node points back to a previous node.
//Solution: Apply Floyd's Cycle Detection algorithm using two pointers: slow moves one step while fast moves two steps.
//If both pointers meet, return true; if the fast pointer reaches NULL, return false.

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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};
