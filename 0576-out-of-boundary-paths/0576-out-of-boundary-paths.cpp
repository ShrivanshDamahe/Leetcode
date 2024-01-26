class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int MOD = 1000000007;
        int ans = 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[startRow][startColumn] = 1;
        
        for (int move = 1; move <= maxMove; move++) {
            vector<vector<int>> temp(m, vector<int>(n, 0));
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (dp[i][j] > 0) {
                        if (i - 1 < 0) ans = (ans + dp[i][j]) % MOD;
                        else temp[i - 1][j] = (temp[i - 1][j] + dp[i][j]) % MOD;

                        if (i + 1 >= m) ans = (ans + dp[i][j]) % MOD;
                        else temp[i + 1][j] = (temp[i + 1][j] + dp[i][j]) % MOD;

                        if (j - 1 < 0) ans = (ans + dp[i][j]) % MOD;
                        else temp[i][j - 1] = (temp[i][j - 1] + dp[i][j]) % MOD;

                        if (j + 1 >= n) ans = (ans + dp[i][j]) % MOD;
                        else temp[i][j + 1] = (temp[i][j + 1] + dp[i][j]) % MOD;
                    }
                }
            }
            dp = temp;
        }

        return ans;
    }
    // Time complexity - O(m * n * maxMove)
    // Space complexity - O(m * n)
};