class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++){
            for (int j = 0; j < words[i].length(); j++){
                if (words[i][j] != words[i][words[i].length() - 1 - j])
                    break;
                else if (j == words[i].length() / 2)
                    return words[i];
            }
        }

        return "";
    }
    // Time complexity - O(m * n)
    // Space complexity - O(1)
};