//Problem number: 234. Palindrome Linked List
//LeetCode link: https://leetcode.com/problems/palindrome-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int arr[100000];
    int size = 0;
    struct ListNode* temp = head;
    while(temp != NULL){
        arr[size] = temp->val;
        size++;
        temp = temp->next;
    }
    int left = 0;
    int right = size-1;
    while(left<right){
        if(arr[left] != arr[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}