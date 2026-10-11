//Problem number: 1721. Swapping Nodes in a Linked List
//LeetCode link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode* first = head;
    struct ListNode* second = head;
    struct ListNode* temp = head;

    for (int i = 1; i < k; i++) {
        first = first->next;
    }

    while (temp != NULL) {
        temp = temp->next;
        if (temp != NULL) {
            second = second->next;
        }
    }
    temp = head;
    int length = 0;

    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    second = head;
    for (int i = 1; i < length - k + 1; i++) {
        second = second->next;
    }
    int value = first->val;
    first->val = second->val;
    second->val = value;

    return head;
}
