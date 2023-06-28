class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode *slow = head, *fast = head->next->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *first = head, *second = slow->next;
        slow->next = nullptr;

        first = sortList(first);
        second = sortList(second);

        return head = merge(first, second);
    }

    ListNode *merge(ListNode *first, ListNode *second) {
        ListNode *head = new ListNode();
        ListNode *merged = head;

        while (first && second) {
            if (first->val <= second->val) {
                merged->next = first;
                first = first->next;
            }
            else {
                merged->next = second;
                second = second->next;
            }

            merged = merged->next;
        }

        if (first) merged->next = first;
        if (second) merged->next = second;

        return head->next;
    }
};
