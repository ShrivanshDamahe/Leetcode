class Solution {
public:
    int minMoves(vector<int>& nums) {
        int smallest = INT_MAX;

        for (auto i : nums)
            smallest = min(smallest, i);

        int steps = 0;
        for (int i = 0; i < nums.size(); i++){
            steps += nums[i] - smallest;
        }

        return steps;

        // Below is the alternate method to solve the problem - 
        // Time complexity - O(n*logn)

        // sort(nums.begin(), nums.end(), greater<int>());
        
        // int result = 0;
        // int max = nums[0];
        // for (int i = nums.size() - 1; i >= 0; i--){
        //     if (i > 0)
        //         result += i * (nums[i - 1] - nums[i]);
        // }

        // return result;
    }
    // Time complexity - O(n)
};