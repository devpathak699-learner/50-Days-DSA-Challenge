//Problem number: 141. Linked List Cycle
//LeetCode Link: https://leetcode.com/problems/linked-list-cycle/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* prev = head;
    struct ListNode* temp = head;
    while(temp != NULL && temp->next != NULL){
        prev = prev->next;
        temp = temp->next->next;
        if(prev == temp){
            return true;
        }
    }
    return false;
}
