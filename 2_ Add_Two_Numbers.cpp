  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode();
        ListNode* head = answer;
        int add, rem = 0;
        
        while (l1 != NULL || l2 != NULL) {
            if (l1 != NULL && l2 != NULL) {
                add = l1->val + l2->val + rem;
                rem = 0;
                if (add > 9) {
                    rem = add/10;
                    add %= 10;
                }
                l1 = l1->next; l2 = l2->next; 
            }else if (l1 != NULL && l2 == NULL) {
                add = l1->val + rem;
                rem = 0;
                if (add > 9) {
                    rem = add/10;
                    add %= 10;
                }
                l1 = l1->next; 
            }else if (l1 == NULL && l2 != NULL) {
                add = l2->val + rem;
                rem = 0;
                if (add > 9) {
                    rem = add/10;
                    add %= 10;
                }
                l2 = l2->next;
            }
            ListNode* newN = new ListNode(add);
            answer->next = newN;
            answer = answer->next;
        }
        
        int copy;
        while (rem >= 1) {
            copy = rem%10;
            ListNode* newN = new ListNode(copy);
            rem /= 10;
            answer->next = newN;
            answer = answer->next;
        }
        
        return head->next;
    }
