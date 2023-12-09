class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        if (n % 2 == 0){
            for (int i = 0; i < n / 2; i++){
                ans += (i * 2) + 1;
            }
        }
        else {
            for (int i = 0; i <= n / 2; i++){
                ans += (i * 2);
            }
        }

        return ans;
    }
    // Time complexity - O(n)
};