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
    void ReverseLL(ListNode* &head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* n;

        while (current != NULL) {
            n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }

        head = prev;
    }
    ListNode* mid3(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL and fast->next != NULL) {
            // fast = fast->next;
            // fast = fast->next;

            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        ListNode*m = mid3(head);

        ListNode* h1 = m->next;
        m->next = NULL;

        ReverseLL(h1);

        while (h1 != NULL) {
            if (h1->val != head-> val) {
                return false;
            }
            h1 = h1->next;
            head = head->next
        }
        return true;
    }
};









