class Solution {
public:
    int fib(int n) {
        int first = 0, second = 1;
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;

        int result = 0;
        for (int i = 0; i < (n-1); i++){
            result = first + second;
            first = second;
            second = result;
        }

        return result;
    }
    // Time complexity - O(n)
};