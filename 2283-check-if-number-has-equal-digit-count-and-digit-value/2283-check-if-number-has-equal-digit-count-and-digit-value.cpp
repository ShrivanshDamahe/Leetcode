class Solution {
public:
    bool digitCount(string num) {
        vector<int> col(10, 0);

        for (int i = 0; i < num.length(); i++){
            col[num[i] - '0']++;
        }

        for (int i = 0; i < num.length(); i++){
            if (col[i] != num[i] - '0')
                return 0;
        }
        return 1;
    }
    // Time complexity - O(n)
};