class Solution {
public:
    int pairSum(ListNode* head) {
        stack<ListNode*> s;

        ListNode* slow = head, *fast = head->next;
        s.push(slow);
        
        if (fast) fast = fast->next;
        else return slow->val + fast->val;

        while (fast && fast->next) {
            slow = slow->next;
            s.push(slow);
            fast = fast->next->next;
        }

        slow = slow->next;
        int ans = 0;
        while (!s.empty()) {
            ans = max(ans, s.top()->val + slow->val);
            s.pop();
            slow = slow->next;
        }

        return ans;
    }
};
