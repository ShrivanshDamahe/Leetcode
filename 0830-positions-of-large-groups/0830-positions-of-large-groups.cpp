class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int a = 0;

        for (int i = 1; i < s.length(); i++){
            if (s[a] != s[i] && s[i - 1] == s[a] && (i - a) >= 3)
                ans.push_back({a, i - 1});

            if (s[a] != s[i])
                a = i;
            
            if (s[a] == s[i] && i == s.length() - 1 && (i - a) >= 2)
                ans.push_back({a, i});
        }

        return ans;
    }
    // Time complexity - O(n)
};