void reorderList(ListNode* head) {
    ListNode* slow = head, *fast = slow->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* head1 = head;
    ListNode* head2 = slow->next;
    slow->next = NULL;
    ListNode* curr = head2, *prev = NULL, *next = NULL;
    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head2 = prev;
    head = new ListNode(0);
    curr = head;
    while(head1 || head2) {
        if(head1) {
            curr->next = head1;
            curr = curr->next;
            head1 = head1->next;
        }
        if(head2) {
            curr->next = head2;
            curr = curr->next;
            head2 = head2->next;
        }
    }
    head = head->next;
}
