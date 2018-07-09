import java.util.HashMap;
import java.util.Arrays;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) return new int[]{map.get(nums[i]), i};
            map.put(target - nums[i],i);
        }
        return new int[]{-1,-1};
    }
}

class lc001{
    public static void main(String[] args) {
        Solution sol = new Solution();
        // int nums[] = {2, 7, 11, 15}, target = 9;
        int nums[] = {3,2,4}, target = 6;
        int[] twoIndex = sol.twoSum(nums,target);
        System.out.println(Arrays.toString(twoIndex));
    }
}
