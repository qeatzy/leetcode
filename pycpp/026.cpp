#include <iostream>
#include <vector>
#include "Vector.h"
using namespace std;

int removeDuplicates(vector<int> nums) {
    if (nums.empty()) return 0;
    size_t i = 1, j = 1, N = nums.size();
    for (; j < N; ++j) {
        if (nums[j] != nums[j-1]) {
            nums[i++] = nums[j];
        }
    }
    return i;
}

int main () {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << nums[0] << " " << nums[1] << " " << nums[6] << endl;
    printVector(nums);
    int k = removeDuplicates(nums);
    printVector(nums,k);
}
