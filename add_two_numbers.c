#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;
	int carry = 0;
	int val1, val2, sum = 0;

	while (l1 != NULL || l2 != NULL || carry != 0) {
		int val1 = (l1 != NULL) ? l1->val : 0;
		int val2 = (l2 != NULL) ? l2->val : 0;
		sum = val1 + val2 + carry;
		carry = sum / 10;
		sum = sum % 10;
		
		struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
		node->next = NULL;
		node->val = sum;

		if (head == NULL) {
			head = node;
			tail = node;
		} else {
			tail->next = node;
			tail = node;
		}
		if (l1 != NULL) {
			l1 = l1->next;
		}
		if (l2 != NULL) {
			l2 = l2->next;
		}
	}
	return head;
}
