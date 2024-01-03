class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int a = 0, b = 0;

        for (int i = 0; (a < word1.length() || b < word2.length()); i++){
            if (i % 2 == 0 && a < word1.length()){
                ans += word1[a];
                a++;
            }
            else if (i % 2 == 1 && b < word2.length()){ 
                ans += word2[b];
                b++;
            }
        }

        return ans;
    }
    // Time complexity - O(m + n)
    // Space complexity - O(m + n)
};