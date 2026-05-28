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
    bool hasCycle(ListNode* head) {
        if (head == nullptr) return false;

        std::unordered_set<ListNode*> visited{};

        while (head->next != nullptr) {
            if (visited.contains(head->next)) return true;
            visited.insert(head->next);
            head = head->next;
        }

        return false;
    }
};
