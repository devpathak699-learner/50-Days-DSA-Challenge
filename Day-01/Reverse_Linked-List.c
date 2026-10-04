//Problem: 206. Reverse Linked List
//LeetCode Link: https://leetcode.com/problems/reverse-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*temp = head;
    struct ListNode*prev = NULL;
    struct ListNode*nextt = NULL;
    if(head == NULL){
        return head;
    }
    while(temp != NULL){
        nextt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextt;
    }
    head = prev;
    return head;
}
