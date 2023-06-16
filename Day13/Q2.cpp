// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> mp;

        ListNode* temp = headA;

        
        while(temp){
            mp[temp]++;
            temp = temp->next;
        }

        
        temp = headB;
        while(temp){
            if(mp.find(temp) != mp.end())
                return temp;

            temp = temp->next;
        }

        return NULL;
    }
};

/* Complexity
    Time complexity:
        O(m+n)

    Space complexity:
        O(m)
*/