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
    ListNode* deleteDuplicates(ListNode* A) {
        ListNode* curr = A;
ListNode* prev = nullptr;
ListNode* res = nullptr;

while(curr){
    if(curr->next && curr->val == curr->next->val){
        ListNode* cpy = curr;
        
        while(cpy->next && cpy->val == cpy->next->val){
            
            cpy = cpy->next;
        }
        if(prev) prev->next = cpy->next;
        curr = cpy->next;
    }
    else{
        if(!res) res = curr;
        prev = curr;
        curr = curr->next;
    }
}
return res;
    }
};
