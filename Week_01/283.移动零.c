/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void moveZeroes(int* nums, int numsSize){
    int LastNonZeroFoundAt = 0;
    int cur = 0;
    for (cur = 0; cur < numsSize; cur++)
    {
        if(nums[cur] != 0)
        {
            if(cur > LastNonZeroFoundAt) // 防止第一个元素为非零时的原地交换
                swap(&nums[LastNonZeroFoundAt], &nums[cur]);
            LastNonZeroFoundAt++;
        }
    }
}


// @lc code=end

