class Solution {
public:
    vector<int> diStringMatch(string s) {
        int inc = 0, dec = s.length();
        vector<int> output;

        for (int i = 0; i <= s.length(); i++){
            if (s[i] == 'I'){
                output.push_back(inc);
                inc++;
            }
            else if (s[i] == 'D'){
                output.push_back(dec);
                dec--;
            }
            else 
                output.push_back(inc);
        }

        return output;
    }
    // Time complexity - O(n)
};