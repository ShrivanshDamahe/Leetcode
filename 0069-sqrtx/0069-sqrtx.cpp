class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return 0;
        else if (x <=3)
            return 1;

        int i;
        for (i = 2; i < x/2; i++){
            if ((x / i) < i + 2 || ((x / i) == i + 2 && (x % i) == 0))
                break;
        }

        return i;
    }
    // Time complexity - O(sqrt(x))
    // Space complexity - O(1)
};