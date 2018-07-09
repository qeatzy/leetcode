#include <iostream>
#include <vector>
using std::vector;
using std::cout;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* create(vector<int> nums) {
    int i, n = nums.size();
    if (0 == n) return NULL;
    ListNode *head = new ListNode(nums[0]), *tail = head;
    for (i = 1; i < n; ++i) {
        ListNode *node = new ListNode(nums[i]);
        tail->next = node;
        tail = node;
    }
    return head;
}

void printList(ListNode *head, const char *sep=" ", const char *ending="\n") {
    for (; head; head = head->next) {
        cout << head->val << sep;
    }
    cout << ending;
}


