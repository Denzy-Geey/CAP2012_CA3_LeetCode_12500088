//Problem: Find the intersection node of two singly linked lists. If the lists do not intersect, return nullptr.
//Solution: Use two pointers, pA and pB, starting at the heads of the two linked lists.
//When either pointer reaches the end, redirect it to the other list's head. Continue moving both pointers until they meet at the intersection node or both reach nullptr.

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode* pA = headA;
        ListNode* pB = headB;

        while (pA != pB) {

            pA = (pA == nullptr) ? headB : pA->next;
            pB = (pB == nullptr) ? headA : pB->next;

        }

        return pA;
    }
};
