class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int i : nums)
            freq[i]++;

        int q = 0;
        for (auto it : freq)
            q = max(q, it.second);

        vector<vector<int>> output(q);

        for (auto it : freq) {
            for (int i = 0; i < it.second; i++)
                output[i].push_back(it.first);
        }

        return output;
    }
    // Time complexity - O(n)
};