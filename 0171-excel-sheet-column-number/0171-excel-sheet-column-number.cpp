class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for (int i = 0; i < columnTitle.length(); i++){
            sum += pow(26, i) * (static_cast<int>(columnTitle[columnTitle.length() - i - 1]) - 65 + 1);
        }
        return sum;
    }
};