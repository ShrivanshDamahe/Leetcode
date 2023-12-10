class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0, carry = 0;

        for (int i = 0; i <= 31; i++){
            int a_bit = 1 & (a >> i);
            int b_bit = 1 & (b >> i);

            if (a_bit == 0 && b_bit == 0){
                if (carry == 0){
                    ans = ans | (0 << i);
                    carry = 0;
                }
                else {
                    ans = ans | (1 << i);
                    carry = 0;
                }
            }
            else if ((a_bit == 1 && b_bit == 0) || (a_bit == 0 && b_bit == 1)){
                if (carry == 0){
                    ans = ans | (1 << i);
                    carry = 0;
                }
                else {
                    ans = ans | (0 << i);
                    carry = 1;
                }
            }
            else if (a_bit == 1 && b_bit == 1){
                if (carry == 0){
                    ans = ans | (0 << i);
                    carry = 1;
                }
                else {
                    ans = ans | (1 << i);
                    carry = 1;
                }
            }
        }

        return ans;
    }
    // Time complexity - O(n)
};