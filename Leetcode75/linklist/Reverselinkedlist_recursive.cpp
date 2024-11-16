class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case: if the list is empty or has a single node
        if (!head || !head->next) {
            return head;
        }

        // Recursively reverse the rest of the list
        ListNode* reversed_list = reverseList(head->next);

        head->next->next = head; // Point the next node's next pointer back to the current node
        head->next = nullptr;   // Break the link to prevent cycles

        return reversed_list;   // Return the new head of the reversed list
    }
};
