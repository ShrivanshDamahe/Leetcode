class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;

        while (n){
            ans += n % k;
            n /= k;
        }

        return ans;
    }
    // Time complexity - O(log n)
    // Space complexity - O(1)
};