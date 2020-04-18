/*
 * @lc app=leetcode.cn id=917 lang=c
 *
 * [917] 仅仅反转字母
 */

// @lc code=start


char * reverseOnlyLetters(char * S){
    char *left = S;
    char *right = S + strlen(S) - 1;
    while(left < right)
    {
        if(isalpha(*left) && isalpha(*right))
        {
            char temp = *left;
            *left = *right;
            *right = temp;
            left++;
            right--;
        }
        else if(isalpha(*left))
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return S;
}


// @lc code=end

