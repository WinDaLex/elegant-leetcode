class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode(0), *p = head;

        int x = 0;
        while (l1 || l2 || x) {
            x += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
            p->next = new ListNode(x % 10);
            x /= 10;
            p = p->next;
        }

        return head->next;
    }
};
