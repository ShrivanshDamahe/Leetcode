class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++){
            int num = i;
            int setBits = 0;

            while (num){
                num &= (num - 1);
                setBits++;
            }

            if (setBits >= 2){
                int j = 2;
                for (j = 2; (j * j) <= setBits; j++){
                    if (setBits % j == 0)
                        break;
                }

                if ((j * j) > setBits) ans++;
            }
        }

        return ans;
    }
    // Time complexity - O(right - left + 1)
    // Space complexity - O(1)
};