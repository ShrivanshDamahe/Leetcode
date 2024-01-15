class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> notlost;
        vector<int> oncelost;
        unordered_map<int, int> freq;

        for (int i = 0; i < matches.size(); i++)
            freq[matches[i][1]]++;

        for (int i = 0; i < matches.size(); i++){
            if (freq.find(matches[i][0]) == freq.end()){
                freq[matches[i][0]] = 2;
                notlost.push_back(matches[i][0]);
            }

            if (freq[matches[i][1]] == 1)
                oncelost.push_back(matches[i][1]);
        }

        sort(notlost.begin(), notlost.end());
        sort(oncelost.begin(), oncelost.end());

        return {notlost, oncelost};
    }
    // Time complexity - O(n * log n)
    // Space complexity - O(m + n)
};