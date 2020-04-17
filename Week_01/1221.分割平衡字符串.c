/*
 * @lc app=leetcode.cn id=1221 lang=c
 *
 * [1221] 分割平衡字符串
 */

// @lc code=start


int balancedStringSplit(char * s){
    int balance = 0;
    int cnt = 0;
    int i = 0;
    while(s[i])
    {
        if(s[i] == 'L')
            balance++;
        if(s[i] == 'R')
            balance--;
        if(balance == 0)
            cnt++;
        i++;
    }
    return cnt;
}


// @lc code=end

