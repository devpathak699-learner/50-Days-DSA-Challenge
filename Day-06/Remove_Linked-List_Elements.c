//Problem number: 203. Remove Linked List Elements
//LeetCode link: https://leetcode.com/problems/remove-linked-list-elements/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head == NULL){
        return NULL;
    }
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    struct ListNode* nextt;
    while(temp != NULL){
        nextt = temp->next;
        if(temp->val == val){
            if(prev == NULL){
                head = nextt;
            }else{
                prev->next = nextt;
            }
            temp->next = NULL;
        }else{
            prev = temp;
        }
        temp = nextt;
    }
    return head;
}