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
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        ListNode* inter=NULL;
        while(tempA!=NULL){
            tempA->val=-(tempA->val);
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            if(tempB->val < 0){
                tempB->val=-(tempB->val);
                inter=tempB;
                break;
            }
            tempB=tempB->next;
        }
        tempA=headA;
        while(tempA!=NULL){
            if(tempA->val < 0)  tempA->val=-(tempA->val);
            tempA=tempA->next;
        }
        return inter;
    }
};