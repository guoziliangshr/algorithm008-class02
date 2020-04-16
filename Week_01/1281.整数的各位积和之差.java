/*
 * @lc app=leetcode.cn id=1281 lang=java
 *
 * [1281] 整数的各位积和之差
 */

// @lc code=start
class Solution {
    public int subtractProductAndSum(int n) {
        int sum = 0;
        int mulit = 1;

        while(n != 0 ){
            int temp = n % 10;
            sum += temp;
            mulit *= temp;
            n /= 10;
        }
        return mulit - sum;
    }
}
// @lc code=end

