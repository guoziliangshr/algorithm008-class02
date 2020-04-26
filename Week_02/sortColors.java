class Solution {
    public void sortColors(int[] nums) {
        int p1 = 0, cur = 0;
        int p2 = nums.length - 1;
        int temp;
        while(cur <= p2) {
            if(nums[cur] == 0) {
                temp = nums[p1];
                nums[p1++] = nums[cur];
                nums[cur++] = temp;
            } else if(nums[cur] == 2) {
                temp = nums[cur];
                nums[cur++] = nums[p2];
                nums[p2--] = temp;
            } else {
                cur++;
            }
        }
    }
}