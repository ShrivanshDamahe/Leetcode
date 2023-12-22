class Solution {
public:
    int maxScore(string s) {
        vector<int> cont(s.length(), 0);
        int ans = INT_MIN, temp = 0;

        for (int i = s.length() - 1; i > 0; i--){
            if (s[i] == '1')
                temp++;

            cont[i] = temp;
        }

        temp = 0;
        for (int i = 0; i < s.length() - 1; i++){
            if (s[i] == '0')
                temp++;
            
            ans = max(ans, temp + cont[i + 1]);
        }

        return ans;
    }
    // Time complexity - O(n)
};