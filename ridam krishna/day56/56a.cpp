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
        ListNode* slow = head, *fast = head; //ntme
        stack<int> st;
        while(fast && fast -> next){
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        int res=0;
        while(st.size()){
            res=max(res,st.top()+slow->val);
            st.pop();
            slow=slow->next;
        }
        return res;
    }
};
