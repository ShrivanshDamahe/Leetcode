class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        if (s.length() == 0 || s.length() == 1)
            return -1;

        int ans = 0;
        bool flag = false;

        for (int i = 0; i < s.length() - 1; i++){
            for (int j = s.length() - 1; j > i; j--){
                if (s[i] == s[j]){
                    ans = max(ans, j - i - 1);
                    flag = true;
                }
            }
        }

        if (ans == 0 && flag != true)
            return -1;
        return ans;
    }
    // Time complexity - O(n ^ 2)
};