class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head; // If the list has 0 or 1 node, return as is.

        ListNode* odd = head;                // Pointer to track odd-index nodes
        ListNode* even = head->next;         // Pointer to track even-index nodes
        ListNode* evenHead = even;           // Head of the even list to reconnect later

        while (even && even->next) {
            odd->next = even->next;          // Link current odd to the next odd node
            odd = odd->next;                 // Move odd pointer forward
            even->next = odd->next;          // Link current even to the next even node
            even = even->next;               // Move even pointer forward
        }

        odd->next = evenHead;                // Connect the odd list to the even list
        return head;                         // Return the modified list
    }
};
