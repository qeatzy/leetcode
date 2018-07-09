#include <iostream>
#include <vector>
#include "List.h"
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
    if (!head) return head;
    ListNode *tail = head, *rem = head->next;
    auto val = head->val;
    for (; rem; rem = rem->next) {
        if (rem->val != val) {
            tail->next = rem;
            tail = rem;
            val = rem->val;
        }
    }
    tail->next = NULL;
    return head;
}

int main () {
    auto nums = {1,1,2,3,3};
    auto head = create(nums);
    printList(head);
    printList(deleteDuplicates(head));
}
