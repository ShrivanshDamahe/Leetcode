class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq;
        int q = INT_MIN;

        for (int i : nums){
            freq[i]++;
            q = max(q, freq[i]);
        }

        vector<vector<int>> output(q);

        for (auto it : freq){
            for (int i = 0; i < it.second; i++)
                output[i].push_back(it.first);
        }

        return output;
    }
    // Time complexity - O(n)
};