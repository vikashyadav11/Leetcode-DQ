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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)
            return NULL;

        ListNode* temp=head;

        int len=0;
        while(temp){
            temp=temp->next;
            len++;
        }

        if(n==len)
            return head->next;

        int cnt=1;
        temp=head;
        while(cnt!=len-n){
            temp=temp->next;
            cnt++;
        }
        ListNode* delNode=temp->next;
        temp->next=temp->next->next;
        delete delNode;
        return head;
    }
};