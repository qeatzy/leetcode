import java.util.HashMap;
import java.util.Arrays;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0, j = nums.length - 1; i < j;) {
            int sum = nums[i] + nums[j];
            if (sum == target) return new int[]{i+1,j+1};
            if (sum < target) ++i;
            if (sum > target) --j;
        }
        return new int[]{-1,-1};
    }
}

class lc167{
    public static void main(String[] args) {
        Solution sol = new Solution();
        int nums[] = {2, 7, 11, 15}, target = 9;
        int[] twoIndex = sol.twoSum(nums,target);
        System.out.println(Arrays.toString(twoIndex));
    }
}

