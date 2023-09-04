class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        ListNode* leftStart = nullptr;  // Node before the left position

        int count = 1;
        
        // Move to the node just before the left position
        while (count < left) {
            leftStart = curr;
            curr = curr->next;
            count++;
        }
        
        ListNode* reversedTail = curr;  // Node at the left position
        
        // Reverse the nodes between left and right
        while (count <= right) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if (leftStart) {
            leftStart->next = prev;
        } else {
            head = prev;  // Update the head if leftStart is nullptr
        }
        
        reversedTail->next = curr;  // Connect the reversed portion to the rest of the list

        return head;
    }
};
