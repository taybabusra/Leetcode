class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current) {
            ListNode* next_node = current->next; // Save the next node
            current->next = prev;               // Reverse the current node's pointer
            prev = current;                     // Move prev to current
            current = next_node;                // Move to the next node
        }

        return prev; // New head of the reversed list
    }
};
