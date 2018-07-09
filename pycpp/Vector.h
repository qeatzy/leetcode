#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void printVector(const vector<int> &nums, int k=-1, const char *sep=" ", const char *ending="\n") {
    if (k < 0) k = nums.size();
    cout << k << " items -- ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << sep;
    }
    cout << ending;
}

