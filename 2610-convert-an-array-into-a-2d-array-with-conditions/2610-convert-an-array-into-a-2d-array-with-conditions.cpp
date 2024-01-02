class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> output;
        unordered_map<int, int> freq;

        for (int i : nums)
            freq[i]++;

        for (auto it : freq) {
            if (output.size() < it.second)
                output.resize(it.second);

            for (int i = 0; i < it.second; i++)
                output[i].push_back(it.first);
        }

        return output;
    }
    // Time complexity - O(n)
};