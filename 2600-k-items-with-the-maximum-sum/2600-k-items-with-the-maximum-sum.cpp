class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
        if (numOnes >= k)
            return k;
        else if (numOnes < k){
            sum += numOnes;
            k -= numOnes;
        }

        if (numZeros >= k)
            return sum;
        else 
            k -= numZeros;

        return sum - k;
    }
    // Time complexity - O(1)
};