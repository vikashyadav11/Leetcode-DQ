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
        
        ListNode* pointerA = headA; // Initialize pointer A to the head of list A. It's one of our runners.
        ListNode* pointerB = headB; // Initialize pointer B to the head of list B. This is our second runner.

        while (pointerA != pointerB) { // Keep going until our runners meet! Or until we're absolutely sure they won't meet.
            if (pointerA == nullptr) { // If runner A reaches the end of its track...
                pointerA = headB; // ...it starts running on track B! It's like saying "Okay, let's see if we can meet if I run the other way".
            } else {
                pointerA = pointerA->next; // Otherwise, runner A continues to the next node on its track. Just keep running!
            }

            if (pointerB == nullptr) { // Same logic as above, but for runner B. If runner B reaches the end of its track...
                pointerB = headA; // ...it starts running on track A!
            } else {
                pointerB = pointerB->next; // Otherwise, runner B continues to the next node on its track.
            }
        }

        return pointerA; // If the runners meet (pointerA == pointerB), we've found the intersection! Return that node. If the lists don't intersect at all, both runners will be null, and we return null.
    }

    
};