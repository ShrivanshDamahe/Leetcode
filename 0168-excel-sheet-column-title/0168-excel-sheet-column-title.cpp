class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char> ans;
        string result;
        while (columnNumber != 0){
            int temp = columnNumber % 26;
            if (temp != 0){
                result = static_cast<char>(temp + static_cast<int> ('A') - 1) + result;
                columnNumber /= 26;
            }
            else {
                result = 'Z' + result;
                columnNumber = (columnNumber / 26) - 1;
            }
        }

        return result;
    }
    // Time complexity - O(log n)
};