class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0;
        int temp1 = 0, temp2 = 1;

        for (int i = 0; i < s.length(); i++){
            if (s[i] == s[i + 1])
                temp2++;
            else {
                ans += min(temp1, temp2);
                temp1 = temp2;
                temp2 = 1;
            }
        }

        return ans;
    }
    // Time complexity - O(n)
};