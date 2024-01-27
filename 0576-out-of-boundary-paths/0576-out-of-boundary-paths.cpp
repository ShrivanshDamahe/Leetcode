class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int ans = 0, M = 1000000007;

        vector<vector<int>> dp(m, (vector<int> (n, 0)));
        dp[startRow][startColumn] = 1;

        for (int i = 1; i <= maxMove; i++){
            vector<vector<int>> temp(m, (vector<int> (n, 0)));

            for (int j = 0; j < m; j++){
                for (int k = 0; k < n; k++){
                    if (j == 0)
                        ans = (ans + dp[j][k]) % M;
                    if (j == m - 1)
                        ans = (ans + dp[j][k]) % M;
                    if (k == 0)
                        ans = (ans + dp[j][k]) % M;
                    if (k == n - 1)
                        ans = (ans + dp[j][k]) % M;

                    temp[j][k] = (((j > 0 ? dp[j - 1][k] : 0) + (j < m - 1 ? dp[j + 1][k] : 0)) % M + 
                                  ((k > 0 ? dp[j][k - 1] : 0) + (k < n - 1 ? dp[j][k + 1] : 0)) % M) % M;
                }
            }

            dp = temp;
        }

        return ans % M;
    }
    // Time complexity - O(m * n * maxMove)
    // Space complexity - O(m * n)
};