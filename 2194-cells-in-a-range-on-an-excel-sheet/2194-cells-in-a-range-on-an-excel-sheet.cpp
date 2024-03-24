class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char c1 = s[0], c2 = s[3];
        char i1 = s[1], i2 = s[4];

        while (c1 <= c2 && i1 <= i2){
            char temp = i1;

            while (i1 <= i2){
                ans.push_back(string(1, c1) + string(1, i1));
                i1++;
            }

            i1 = temp;
            c1++;
        }

        return ans;
    }
    // Time complexity - O(m * n)
    // Space complexity - O(m * n)
    // where,  m - number of rows
    //         n - number of columns
};