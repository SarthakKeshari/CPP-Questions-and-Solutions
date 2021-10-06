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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, int> m;
        ListNode* p = head;
        
        while (p) {
            if (m[p])
                return p;
            else
                m[p] = p->val;
            p = p->next;
        }
        return NULL;
    }
};