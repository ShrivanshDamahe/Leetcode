class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        if (matrix.size() == 1)
            return matrix[0][0];
        
        int ans = INT_MAX;
        vector<vector<int>> dp(matrix);

        for (int i = 1; i < matrix.size(); i++){
            for (int j = 0; j < matrix.size(); j++){
                if (j == 0)
                    dp[i][j] += min(dp[i - 1][j], dp[i - 1][j + 1]);
                else if (j == matrix.size() - 1)
                    dp[i][j] += min(dp[i - 1][j], dp[i - 1][j - 1]);
                else 
                    dp[i][j] += min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i - 1][j + 1]));

                if (i == matrix.size() - 1)
                    ans = min(ans, dp[i][j]);
            }
        }

        return ans;
    }
    // Time complexity - O(n^2)
    // Space complexity - O(n^2)
};