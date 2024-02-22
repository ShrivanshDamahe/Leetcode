class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;

        while (n >= 1){
            ans ^= start;
            start += 2;
            n--;
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};