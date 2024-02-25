class Solution {
public:
    bool checkOverlap(int radius, int x, int y, int x1, int y1, int x2, int y2) {
        int a = max(x1, min(x2, x));
        int b = max(y1, min(y2, y));

        return (radius*radius >= (a - x)*(a - x) + (b - y)*(b - y));
    }
    // Time complexity - O(1)
    // Space complexity - O(1)
};