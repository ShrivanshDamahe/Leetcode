class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i <= j){
            if (s[i] != s[j]){
                if (s[i] > s[j])
                    s[i] = s[j];
                else 
                    s[j] = s[i];
            }
            i++;
            j--;
        }

        return s;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};