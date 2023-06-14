// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode *p=head;
        struct ListNode *q=head;
       while(p){
       while( p && q && p->val==q->val){
           p=p->next;
       }
       q->next=p;
       q=p;
       if(p){
       p=p->next;
       }
       }
        return head;
    }
};

/* Complexity
    Time complexity:
        O(n)

    Space complexity:
        O(1)
*/