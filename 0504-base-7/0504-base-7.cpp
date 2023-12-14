class Solution {
public:
    string convertToBase7(int num) {
        bool negative = false;
        if (num < 0){
            num *= -1;
            negative = 1;
        }
        
        int base7 = 0, count = 0;
        while (num != 0){
            int temp = num % 7;
            base7 = base7 + (temp * pow(10, count));
            num /= 7;
            count++;
        }

        if (negative == 1)
            base7 *= -1;
        return to_string(base7);
    }
    // Time complexity - O(log (base 7) n)
};