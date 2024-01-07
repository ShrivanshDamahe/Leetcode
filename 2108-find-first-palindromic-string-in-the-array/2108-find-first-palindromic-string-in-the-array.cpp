class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++){
            int j = 0, k = words[i].length() - 1;
            while (j < k){
                if (words[i][j] != words[i][k])
                    break;
                
                j++;
                k--;
            }

            if (j == k || j > k)
                return words[i];
        }

        return "";
    }
    // Time complexity - O(m * n)
    // Space complexity - O(1)
};