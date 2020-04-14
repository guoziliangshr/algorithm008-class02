/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>


int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i;
    for (i = digitsSize - 1; i >= 0; i--)
    {
        digits[i]++;
        digits[i] = digits[i] % 10;
        if(digits[i] != 0)
        {
            *returnSize = digitsSize;
            return digits;
        }
            
    }
    
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    memset(result, 0, (digitsSize + 1) * sizeof(int));
    result[0] = 1;
    *returnSize = digitsSize + 1;
    return result;
}



// @lc code=end

