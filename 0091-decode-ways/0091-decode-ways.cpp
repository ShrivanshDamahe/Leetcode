class Solution {
public:
    int numDecodings(string s) {
        if (s.empty() || s[0] == '0') 
            return 0;

        vector<int> ans(s.length() + 1, 0);
        ans[0] = 1;
        ans[1] = 1;

        for (int i = 2; i <= s.length(); i++){
            int temp1 = s[i - 1] - '0';
            int temp2 = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');

            if (temp1 >= 1)
                ans[i] += ans[i - 1];

            if (temp2 >= 10 && temp2 <= 26)
                ans[i] += ans[i - 2];
        }

        return ans[s.length()];
    }
    // Time complexity - O(n)
};