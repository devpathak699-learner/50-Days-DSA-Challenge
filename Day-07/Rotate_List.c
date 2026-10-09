//Problem number: 61. Rotate List
//LeetCode link: https://leetcode.com/problems/rotate-list/description/

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0) {
        return head;
    }
    int len = 0;
    struct ListNode* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    k = k % len;
    for (int i = 0; i < k; i++) {
        temp = head;
        struct ListNode* prev = NULL;

        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        temp->next = head;
        prev->next = NULL;
        head = temp;
    }

    return head;
}