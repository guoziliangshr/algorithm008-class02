/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize){
    if (A == NULL || ASize == 0)
    {
        *returnSize = 0;
        return NULL;
    }
    int left = 0;
    int right = ASize - 1;
    int i;
    int *res = (int *)malloc(sizeof(int) * ASize);
    for (i = ASize - 1; i >= 0; i--)
    {
        if(abs(A[left]) > abs(A[right]))
        {
            res[i] = A[left] * A[left];
            left++;
        }
        else
        {
            res[i] = A[right] * A[right];
            right--;
        }
    }
    *returnSize = ASize;
    return res;
}


// @lc code=end

