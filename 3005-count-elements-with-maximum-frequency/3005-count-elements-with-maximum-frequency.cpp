class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int num = 0, max = INT_MIN;
        unordered_map<int, int> dp;

        for (int i : nums)
            dp[i]++;

        for (auto pair : dp){
            if (max == pair.second)
                num += pair.second;
            else if (max < pair.second){
                max = pair.second;
                num = pair.second;
            }
        }

        return num;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};