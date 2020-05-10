/*
 * @lc app=leetcode.cn id=169 lang=java
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
    public int majorityElement(int[] nums) {
        int count = 0, candidate = 0;
        for(int i = 0; i < nums.length; ++i) {
            if (count == 0)
                candidate = nums[i];
            if (nums[i] != candidate)
                count--;
            else
                count++;
        }
        return candidate;
    }
}
// @lc code=end

