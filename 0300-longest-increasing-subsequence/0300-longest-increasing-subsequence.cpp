class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int output = 1;
        vector<int> dp(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++){
            for (int j = 0; j < i; j++){
                if (nums[i] > nums[j])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            output = max(output, dp[i]);
        }

        return output;
    }
    // Time complexity - O(n^2)
    // Space complexity - O(n)
};