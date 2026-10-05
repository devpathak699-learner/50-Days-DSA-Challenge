//Problem number: 21. Merge Two Sorted Lists
//LeetCode link: https://leetcode.com/problems/merge-two-sorted-lists/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode*list3 = NULL;
    struct ListNode*temp1 = list1;
    struct ListNode*temp2 = list2;
    struct ListNode*temp3 = NULL;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val > temp2->val){
            if(list3 == NULL){
                list3 = temp2;
                temp3 = list3;
            }else{
                temp3->next = temp2;
                temp3 = temp3->next;
            }
            temp2 = temp2->next;
        }else{
            if(list3 == NULL){
                list3 = temp1;
                temp3 = list3;
            }else{
                temp3->next = temp1;
                temp3 = temp3->next;
            }
            temp1 = temp1->next;
        }
    }
    if(temp1 != NULL){
        if(list3 == NULL){
            list3 = temp1;
            temp3 = list3;
        }else{
            temp3->next = temp1;
        }
    }
    if(temp2 != NULL){
        if(list3 == NULL){
            list3 = temp2;
            temp3 = list3;
        }else{
            temp3->next = temp2;
        }
    }
    return list3;
}
