// https://leetcode.com/problems/linked-list-cycle/description/

class Solution {
public:
  ListNode *floydcycle(ListNode *head)
  {
      if(head==NULL)
      {return NULL;}

      ListNode *slow=head;
      ListNode *fast=head;
      
      while(slow!=NULL && fast!=NULL)
      {
          fast=fast->next;
          if(fast!=NULL)
          fast=fast->next;
          slow=slow->next;
          if(slow==fast)
          return slow;
      }
      return NULL;

  }
    bool hasCycle(ListNode *head) {
     return floydcycle(head);
    }
};

/* Complexity
    Time complexity:
        O(n)

    Space complexity:
        O(1)
*/