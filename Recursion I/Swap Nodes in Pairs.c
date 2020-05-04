/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
     if (head==NULL || !head->next) {
            return head;
        }
        struct ListNode* p = head->next;
       struct ListNode* rest = p->next;
        p->next = head;
        // swap the rest part
        head->next = swapPairs(rest);
        return p;

}
