#include <iostream>
#include <vector>
#include "List.h"
using namespace std;

ListNode* swapPairs_dummy(ListNode* head) {
    ListNode *dummy = new ListNode(-1), *tail = dummy, *p2;
    for (; ; head = p2) {
        if (!head || !head->next) { tail->next = head; break; }
        p2 = head->next->next;
        tail->next = head->next;
        tail->next->next = head;
        tail = head;
        head = p2;
    }
    return dummy->next;
}

ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) { return head; }
    ListNode *ret = head->next, *p2 = ret->next, *tail = head;
    ret->next = head;
    head = p2;
    for (; ; head = p2) {
        if (!head || !head->next) { tail->next = head; break; }
        p2 = head->next->next;
        tail->next = head->next;
        tail->next->next = head;
        tail = head;
        head = p2;
    }
    return ret;
}

int main () {
    auto nums = {1,2,3,4,5};
    auto head = create(nums);
    printList(head);
    printList(swapPairs(head));
}
