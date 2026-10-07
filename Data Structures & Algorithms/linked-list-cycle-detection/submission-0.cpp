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
    unordered_set<ListNode*> us;
public:
    bool hasCycle(ListNode* head) {
        while(head){
            if(us.count(head)!=0)return true;
            us.insert(head);
            head = head->next;
        }
        return false;
    }
};
