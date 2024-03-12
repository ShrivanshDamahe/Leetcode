class Solution {
public:
    bool isFascinating(int n) {
        vector<int> dp(9, 0);
        int i, a;

        for (int j = 1; j <= 3; j++){
            a = n * j;
            
            while (a){
                if (a % 10 == 0)
                    return false;

                dp[(a % 10) - 1]++;
                a /= 10;
            }
        }

        for (i = 0; i < 9; i++){
            if (dp[i] != 1)
                break;
        }

        return (i == 9);
    }
    // Time complexity - O(1)
    // Space complexity - O(1)
};