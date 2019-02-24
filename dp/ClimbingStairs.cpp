//problem : https://leetcode.com/problems/climbing-stairs
//tutorial: https://www.geeksforgeeks.org/count-ways-reach-nth-stair/


// Problem breaksdown to Fibonacci sequence easily solvable by DP

class Solution {
public:
    int climbStairs(int n) {
        int i,dp[n+1]={0};
        dp[0]=dp[1] = 1;
        for(i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
    return dp[n];
    }
};
