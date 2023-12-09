class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int sum = 0;

        for (int i = 0; i < nums.size(); i = i+2){
            sum += nums[i];
        }

        return sum;
    }
    // Time complexity - O(n.logn)
    // It is the time taken to sort the array.
    // And O(n/2) is neglected which is required by the loop.
};