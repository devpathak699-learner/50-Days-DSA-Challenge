//Problem: 876. Middle of the Linked List
//LeetCode Link: https://leetcode.com/problems/middle-of-the-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*temp = head;
    int i=0;
    while(temp != NULL){
        temp = temp->next;
        i++;
    }
    int middle=(i/2)+1;
    temp = head;
    for(int j=1; j<middle; j++){
        temp = temp->next;
    }
    return temp;
}
