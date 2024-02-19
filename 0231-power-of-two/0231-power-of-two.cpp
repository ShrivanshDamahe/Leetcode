class Solution {
public:
    // bool isPowerOfTwo(int n) {
    //     if (n <= 0)
    //         return 0;

    //     while (n % 2 == 0)
    //         n /= 2;

    //     return (n == 1);
    // }
    // Time complexity - O(log n)
    // Space complexity - O(1)

    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return 0;

        return ((n & (n - 1)) == 0);
    }
    // Time complexity - O(1)
    // Space complexity - O(1)
};