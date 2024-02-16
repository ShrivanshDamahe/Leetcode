class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int ans = 0;
        unordered_map<int, int> dp;
        vector<int> temp;

        for (int i : arr)
            dp[i]++;

        for (auto pair : dp)
            temp.push_back(pair.second);

        sort(temp.begin(), temp.end());

        for (int i : temp)
            (i <= k) ? (k -= i) : ans++;

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};