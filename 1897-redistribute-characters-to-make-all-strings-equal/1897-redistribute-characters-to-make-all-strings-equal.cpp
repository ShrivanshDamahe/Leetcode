class Solution {
public:
    bool makeEqual(vector<string>& words){
        vector<int> freq(26, 0);
        int sum = 0;

        for (int i = 0; i < words.size(); i++){
            int j = 0;
            while (j < words[i].length()){
                freq[words[i][j] - 'a']++;
                sum++;
                j++;
            }
        }

        if (sum % words.size() != 0)
            return 0;

        for (int i = 0; i < 26; i++){
            if (freq[i] % words.size() != 0)
                return 0;
        }

        return 1;
    }
    // Time complexity - O(m*n)
};