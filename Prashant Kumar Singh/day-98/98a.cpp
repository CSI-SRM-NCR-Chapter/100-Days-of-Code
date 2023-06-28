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
    void mergesorting(ListNode** head){
        ListNode*first;
        ListNode*second;
        ListNode*current=*head;
        if(!current || !current -> next) return;
        middle(current, &first, &second);
        mergesorting(&first);
        mergesorting(&second);
        *head = merge(first, second);
    }

    void middle(ListNode* current, ListNode** first, ListNode** second){
        ListNode* fast = current -> next;
        ListNode* slow = current;
        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }
        }
        *first = current;
        *second = slow -> next;
        slow -> next = NULL;
    }

    ListNode* merge(ListNode* first, ListNode* second){
        ListNode* final = NULL;
        if(!first) return second;
        if(!second) return first;
        if(first -> val <= second -> val){
            final = first;
            final -> next = merge(first -> next, second);
        }
        else{
            final = second;
            final -> next = merge(first, second -> next);
        }
        return final;
    }

    ListNode* sortList(ListNode* head) {
        mergesorting(&head);
        return head;
    }
};
