class Solution {
public:
    int totalMoney(int n) {
        int a = n / 7, b = n % 7;

        int full_weeks = a * (56 + (a - 1) * 7) / 2;
        int half_ones = (b * (b + 1) / 2) + (a * b);

        return full_weeks + half_ones;
    }
    // Time complexity - O(1)
    // Space complexity - O(1)
};