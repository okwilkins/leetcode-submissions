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

        int j{static_cast<int>(forward.size()) - 1};

        for (int i{0}; i < forward.size(); ++i) {
            if (forward[i] != forward[j]) return false;
            --j; 
        }

        return true;
    }
};