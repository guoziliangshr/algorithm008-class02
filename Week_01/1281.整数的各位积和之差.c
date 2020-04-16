/*
 * @lc app=leetcode.cn id=1281 lang=c
 *
 * [1281] 整数的各位积和之差
 */

// @lc code=start


int subtractProductAndSum(int n){
    int mulit = 1;
    int sum = 0;
    while(n != 0)
    {
        int temp = n % 10;
        sum += temp;
        mulit *= temp;
        n /= 10;
    }
    return mulit - sum;
}

// @lc code=end

