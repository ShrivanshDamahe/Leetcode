class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        // while (num != 0){
        //     if (num % 2 == 0){
        //         num /= 2;
        //     }
        //     else {
        //         --num;
        //     }
        //     ++steps;
        // }

        // Using Bitwise approach
        while (num != 0){
            if ((num & 1) == 0){
                num = num >> 1;     // num >>= 1;
            }
            else {
                --num;
            }
            ++steps;
        }

        return steps;
    }
    // Time complexity = O(log n)
};