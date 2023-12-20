class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop", row2 = "asdfghjkl";
        vector<string> ans;

        for (int i = 0; i < words.size(); i++){
            int check1 = 0, check2 = 0;

            for (int j = 0; j < words[i].size(); j++){
                char str = tolower(words[i][j]);
                if (row1.find(str) != string::npos)
                    check1++;
                else if(row2.find(str) != string::npos)
                    check2++;
            }

            if (check1 == words[i].size() || check2 == words[i].size() || (check1 == 0 && check2 == 0))
                ans.push_back(words[i]);
        }

        return ans;
    }
    // Time complexity - O(m * n)
};