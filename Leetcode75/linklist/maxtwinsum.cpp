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
    int pairSum(ListNode* head) {
        // Step 1: Store all node values in a vector
        std::vector<int> values;
        ListNode* current = head;
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }

        // Step 2: Calculate twin sums and find the maximum
        int n = values.size();
        int maxTwinSum = 0;
        for (int i = 0; i < n / 2; ++i) {
            int twinSum = values[i] + values[n - 1 - i];
            maxTwinSum = std::max(maxTwinSum, twinSum);
        }

        return maxTwinSum;
    }
};
