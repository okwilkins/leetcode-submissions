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
    bool isPalindrome(const ListNode *head) {
        if (head == nullptr) return true;

        std::vector<int> forward{}; 

        while (head != nullptr) {
            forward.push_back(head->val);
            head = head->next;
        }

        std::vector<int> backward{forward};
        std::reverse(backward.begin(), backward.end());

        return forward == backward;
    }
};