class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol = static_cast<long long>(length) * width * height;
        int maxDimension = max(max(length, height), width);

        if ((vol >= 1000000000 || maxDimension >= 10000) && (mass >= 100))
            return "Both";
        else if (mass >= 100)
            return "Heavy";
        else if (vol >= 1000000000 || maxDimension >= 10000)
            return "Bulky";
        return "Neither";
    }
    // Time complexity - O(1)
};