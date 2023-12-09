class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = 0;
        if (n <= 0)
            return 0;

        while (n % 2 == 0){
            n /= 2;
        }
        
        if (n == 1)
            flag = 1;

        return flag;
    }
    // Time complexity - O(log n)
};